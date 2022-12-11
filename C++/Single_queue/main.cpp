#include <iostream>

using namespace std;

class quee
{
    int *que;
    int toc;
    int sizeofquee;


public:
    quee (int L)
    {
        sizeofquee=L;
        toc=0;
        que=new int (sizeofquee);
        cout<<"Constructor"<<endl;
    }
    quee ()
    {
        sizeofquee=4;
        toc=0;
        que=new int (sizeofquee);
        cout<<"Constructor"<<endl;
    }
    int ISFULL()
    {
        return (toc==sizeofquee);
    }
    int ISEMPTY()
    {
        return (toc==0);
    }
    void ENQ (int n)
    {
        if (ISFULL()==0)
            que[toc++]=n;
        else
            cout<<"Queue is FULL"<<endl;
    }
    int DEQ()
    {
        int temp;
        int i;
        if (!ISEMPTY())
        {
            temp=que[0];
            for (i=0;i<toc;i++)
            {
                que[i]=que[i+1];
            }
            toc--;
            return temp;
        }



        else
        {
            //cout<<"Queue is Empty"<<endl;
        return -1;
        }
    }

    ~quee()
    {
        delete[]que;
        cout<<"Destructor"<<endl;
    }

};
int main()
{
quee q2(5);
    q2.ENQ(3);
    q2.ENQ(5);
    q2.ENQ(7);
    q2.ENQ(9);
    q2.ENQ(11);
    cout<<q2.DEQ()<<endl;
    cout<<q2.DEQ()<<endl;
    cout<<q2.DEQ()<<endl;
     q2.ENQ(12);


    cout<<q2.DEQ()<<endl;
    cout<<q2.DEQ()<<endl;
    cout<<q2.DEQ()<<endl;
return 0;


}
