#include<iostream>
#include<fstream>
const char *file="record.txt";
using namespace std;
class Transaction{
protected:
    int account_num;
    char name[25];//If made string error will arise during reading of file if file is opened in append mode
    double total_balance;
public:
    void readData();
    void showData();
    void readFromFile();
    void writeToFile();
    void update();
    void readOneRecord();
    void deleteRecord();
    void getRecordInfo();
};
void Transaction::readData(){
    cout<<"Enter Name:";cin>>name;
    cout<<"Enter Account Number:";cin>>account_num;
    cout<<"Enter total balance:";cin>>total_balance;
    cout<<endl;

}
void Transaction::showData(){
    cout<<"Account Number:"<<account_num<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Total Balance:"<<total_balance<<endl;
    cout<<endl;
}
void Transaction::writeToFile(){
    ofstream outfile(file,ios::app|ios::binary);
    readData();
    outfile.write(reinterpret_cast<char*>(this),sizeof(*this));
}
void Transaction::readFromFile(){
    ifstream infile(file,ios::binary|ios::in);
    while(!infile.eof()){
        if(infile.read(reinterpret_cast<char*>(this),sizeof(*this))>0);
        showData();

    }
}
void Transaction::getRecordInfo(){
    ifstream infile(file,ios::binary|ios::in);
    infile.seekg(0,ios::end);
    int count = infile.tellg()/sizeof(*this);
    cout<<"There are"<<count<<"records"<<endl;
    cout<<endl;
}
void Transaction::readOneRecord(){
    getRecordInfo();
    int n;
    cout<<"Enter record number to view:";cin>>n;
     ifstream infile(file,ios::binary|ios::in);
    infile.seekg((n-1)*sizeof(*this));
    infile.read(reinterpret_cast<char *>(this),sizeof(*this));
    showData();
}
void Transaction::update(){
    int n;
    getRecordInfo();
    fstream iofile(file,ios::binary|ios::out|ios::in);//if opened only if output mode file will be overwritten
    cout<<"Enter a record to modify:";cin>>n;cout<<endl;
    iofile.seekp((n-1)*sizeof(*this));
    readData();
    iofile.write(reinterpret_cast<char*>(this),sizeof(*this));
}

void Transaction::deleteRecord(){
    int n;
    getRecordInfo();
    fstream tfile("tempfile.txt",ios::in|ios::out|ios::binary);
    fstream iofile(file,ios::binary|ios::in|ios::out);
    iofile.seekg(0,ios::end);
    int count = iofile.tellg()/sizeof(*this);
    cout<<"Enter the Record No to Delete:";cin>>n;cout<<endl;

    for(int i=0;i<count;++i){
        iofile.read(reinterpret_cast<char *>(this),sizeof(*this));
        if(i==(n-1))continue;
        tfile.write(reinterpret_cast<char *>(this),sizeof(*this));
    }
    tfile.close();
    iofile.close();
   // rename("tempfile.txt","record.txt");
   tfile.open("tempfile.txt",ios::in|ios::out|ios::binary);
    iofile.open(file,ios::binary|ios::out);
    for(int i=0; i<count-1;++i){
        tfile.read(reinterpret_cast<char *>(this),sizeof(*this));
        iofile.write(reinterpret_cast<char *>(this),sizeof(*this));
    }
    tfile.close();
    remove("tempfile.txt");



}
int main(void){
    Transaction t;
    t.writeToFile();
    t.readFromFile();
    t.readOneRecord();
    t.update();
    t.readOneRecord();
    t.deleteRecord();
    t.readOneRecord();



   // t.update();
    //t.readFromFile();


    return 0;
}
