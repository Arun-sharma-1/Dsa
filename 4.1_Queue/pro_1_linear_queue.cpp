#include<bits/stdc++.h>
using namespace std;
class Queue
{
    int front;
    int rear;
    // rear points to where i want to insert my element 
    int arr[10];
    public:
    int size;
    Queue()
    {
        front=0;
        rear=0;
        size=0;
    }
    void push(int ele)
    {
        if(rear==10)
        {
            cout<<"saturation occur "<<endl;
        }
        if(size==10)
        {
            cout<<"overflow "<<endl;
        }
         
        arr[rear]=ele;
        rear++;
        size++;
    }
    void pop()
    {
        if(size==0)
        {
            cout<<"underflow "<<endl;
        }
        front++;
        size--;

    }
    int front_show()
    {
           if(size==0)
           {
               cout<<"empty queue "<<endl;
               return -1;
           }
        return arr[front];
    }
    int get_size()
    {
        return size;
    }
};
int main()
{
    Queue q;
    q.push(10);
    q.push(20);
   
    q.push(20);
    cout<<q.front_show()<<endl;
    cout<<q.get_size();
}