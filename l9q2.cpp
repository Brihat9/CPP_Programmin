/**Write  a  class  template  for  queue  class.  Assume  the  programmer  using  the  queue  won't  make
mistakes, like exceeding the capacity of the queue, or trying to remove an item when the queue is
empty. Define several queues of different data types and insert and remove data from them.**/

#include<iostream>
#define MAX 10
using namespace std;

template <typename T>

class queue /**data structure that operates on First In First Out FIFO**/
{
private:
    T array[MAX];
    int count;
public:
    queue()
    {
        count=0;
        for(int i=0;i<MAX;i++)
            array[i]=0;
    }
    void add(T a)
    {
        array[count++]=a;
        cout<<a<<" added in queue."<<endl;
    }
    T remove()
    {
        T rem=array[0];
        count--;
        for(int i=0;i<count;i++)
            array[i]=array[i+1];
        return rem;
    }
    int size()
    {
        return count;
    }
};

int main(void)
{
    cout<<"Integer queue\n"<<endl;
    queue<int> iqueue;
    iqueue.add(123);
    iqueue.add(456);
    iqueue.add(789);
    iqueue.add(852);
    cout<<endl;
    cout<<"Size of queue : "<<iqueue.size()<<endl;
    cout<<"Removing "<<iqueue.remove()<< " from queue"<<endl;
    cout<<"Size of queue : "<<iqueue.size()<<endl;
    cout<<"Removing "<<iqueue.remove()<< " from queue"<<endl;
    cout<<"Removing "<<iqueue.remove()<< " from queue"<<endl;
    cout<<"Size of queue : "<<iqueue.size()<<endl;
    cout<<endl;

    cout<<"Float queue\n"<<endl;
    queue<float> fqueue;
    fqueue.add(1.23);
    fqueue.add(45.6);
    fqueue.add(.789);
    fqueue.add(85.02);
    cout<<endl;
    cout<<"Size of queue : "<<fqueue.size()<<endl;
    cout<<"Removing "<<fqueue.remove()<< " from queue"<<endl;
    cout<<"Size of queue : "<<fqueue.size()<<endl;
    cout<<"Removing "<<fqueue.remove()<< " from queue"<<endl;
    cout<<"Size of queue : "<<fqueue.size()<<endl;
    cout<<endl;

    cout<<"String queue\n"<<endl;
    queue<char *> squeue;
    squeue.add("Ram");
    squeue.add("Shyam");
    squeue.add("Hari");
    squeue.add("Krishna");
    cout<<endl;
    cout<<"Size of queue : "<<squeue.size()<<endl;
    cout<<"Removing "<<squeue.remove()<< " from queue"<<endl;
    cout<<"Size of queue : "<<squeue.size()<<endl;
    cout<<"Removing "<<squeue.remove()<< " from queue"<<endl;
    cout<<"Size of queue : "<<squeue.size()<<endl;
    cout<<endl;
    return 0;
}
