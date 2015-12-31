//======================================================================
//
//  A simpel program to demonstrate the use of SHA1() hashing. It uses
//  the OpenSSl's crypto library.
//
//  Requred packaged:
//      g++, openssl
//
//  Compilation:
//      gcc encrypt.cc -o encrypt -lcrypto
//
//  Usage:
//      ./encrypt "string_to_encrypt"
//
//======================================================================

#include <iostream>
#include <cassert>
#include <sstream>
#include <openssl/sha.h>

typedef unsigned char   uchar;
typedef unsigned int    uint;

using namespace std;

//======================================================================
//  Function that returns the SHA1 hashed string of the given string.

string encrypt(const string& in)
{
    uchar temp[SHA_DIGEST_LENGTH]; // SHA_DIGEST_LENGTH = 20 bytes

    // This is the library function, declared in <openssl/sha.h>
    // See 'man 3 sha' for details.
    SHA1((uchar*) in.c_str(), in.size(), temp);

    // We'll be writing the output string to a stringstream;
    ostringstream o;

    // Convert every byte into HEX string and add to o.
    for (int i = 0; i < SHA_DIGEST_LENGTH; ++i)
    {
        // If the string is single digit, add a "0" before it.
        if (temp[i] <= 0xF)
            o << "0";

        o << hex << (uint) temp[i];
    }

    return o.str();
}


//============== MAIN ==================================================

int main(int argc, char** argv)
{
    // Must pass exactly one argument
    assert(argc == 2);

    // Store the argument in a string.
    string in = string(argv[1]);

    // Display its SHA1 hash string.
    cout << encrypt(in) << " - " << in << endl;
}
