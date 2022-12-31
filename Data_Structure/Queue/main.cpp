#include <iostream>

using namespace std;
template <class T>

class Queue
{
   T *arr;
    int size,front,rear;

public:
    Queue(int size)
    {
        this->size=size;
        arr=new int [size];
        front=rear=-1;

    }
    void EnQueue(T data)
    {
        if(IsFull())
        {
            return;
        }
        if(IsEmpty())
        {
            front++;
        }

        rear++;
        arr[rear]=data;


    }
    int DeQueue(T& data)
    {
        if(IsEmpty())
        {
            return 0;

        }
        /* First implementation
            data = arr[front];
            front++;
            */

            // Shifting Queue

            data  = arr[front];
            Shift();



            return 1;
    }
     void Display()
    {
       for( int i=0 ; i<size-1; i++)
        {
            if(arr[i]==NULL)
                return ;
else
            cout<<arr[i]<<"  ";
        }
       cout <<"\n";

    }

protected:
private:
    int IsFull()
    {

        return rear==size-1;
    }
    int IsEmpty()
    {
        return front==-1;
    }
    Shift()
    {
        for( int i=0 ; i<size ; i++)
        {
            arr[i] = arr[i+1];
        }
        rear--;
    }


};
int main()
{

 Queue <int >que(5);

 que.EnQueue(5);
 que.EnQueue(8);
  que.EnQueue(9);
 que.EnQueue(1);
  que.EnQueue(4);
 que.EnQueue(3);

 que.Display();
 int num;

 if(que.DeQueue(num)){
    cout<<"\n num Deque:"<<num<<"\n";
 }else{
 cout<<"Queue is Empty: \n";
 }

    que.Display();


    return 0;
}
