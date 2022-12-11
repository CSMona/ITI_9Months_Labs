#include <iostream>

using namespace std;

class queue
{
    int*stk;
    int header,tail,size,counter;
public:
    queue(int l)
    {
        size=l;
        header=0;
        tail=0;
        counter=1;
        stk=new int[l];

    }
    ~queue()
    {
        cout<<"destor"<<endl;
    }




    void enq(int x)
    {

        if (counter>=0&&counter!=size+1)

        {


            stk[tail]=x;
            tail++;
            if (tail>size-1)
                tail=0;

            counter++;
            if(counter==size+1)
                counter=size+1;

        }
        else
        {
            cout<<"queue is full"<<endl;
//cout<<"counter: "<<counter<<endl;

        }

    }


    int deq()
    {
        if(counter!=1&&counter<=size+1)
        {

            cout<<"pop: "<<stk[header]<<endl;
            header++;
            if(header>=size)
                header=0;
            counter--;
            if(counter==1)
                counter=1;

//cout<<"counter: "<<counter<<endl;
        }
        else
            cout<<"queue is empty "<<endl;

    }

};


int main()
{
    queue q(4);


    q.enq(1);
    q.enq(2);
    q.enq(3);
    q.enq(4);
    q.enq(5);
    q.enq(6);
    q.enq(7);

    q.deq();//1
    q.deq();//2
    q.deq();//3


    q.enq(20);
    q.enq(100);

    q.deq();//1
   // q.deq();//2
    //q.deq();//3

   // q.enq(1);
   // q.enq(2);
   // q.enq(3);
   // q.enq(4);
   // q.enq(4);

    //q.deq();//1
   // q.deq();//2
   // q.deq();//3
   // q.deq();//4
   // q.deq();//5

    return 0;
}

