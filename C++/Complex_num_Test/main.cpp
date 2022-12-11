#include <iostream>

using namespace std;
class complex
{
    int real;
    int img;
public:
    void setReal(int R)
    {
        real=R;
    }
    void setImg (int I)
    {
        img=I;
    }
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }
    complex sum(complex c)
    {
        complex result;
        result.real= real+c.real;
        result.img=img+c.img;
        return result;
    }
    void print()
    {
       if (real>0 && img >0)
       {if (img==1)
       cout<<real<<"+"<<"J"<<endl;

       else
       cout<<real<<"+"<<img<<"J"<<endl;}
       else if(real<0 && img>0 )
       {if (img==1)
       cout<<real<<"+"<<"J"<<endl;
       else
       cout<<real<<"+"<<img<<"J"<<endl;

       }

       else if(real>0 && img <0)
{if (img==-1)
       cout<<real<<"-J"<<endl;
       else

    cout<<real<<img<<"j"<<endl;
}

       else if(real<0 && img <0)
       {
           if (img==-1)
       cout<<real<<"-J"<<endl;
       else
cout<<real<<img<<"j"<<endl;
       }

       else if(real==0&&img>0)
       {if (img==1)
       cout<<"J"<<endl;
       else
         cout<<img<<"j"<<endl;
       }

        else if (real==0&&img<0)
        {
            if (img==-1)
       cout<<"-J"<<endl;
       else
        cout<<img<<"j"<<endl;
        }



        else if(real>0&&img==0)

           cout<<real<<endl;
           else
            cout<<real<<endl;




    if(real==0&&img==0)
        cout<<"0";}


};
complex sub(complex A,complex B)
{
   complex result;
   result.setReal(A.getReal()-B.getReal());
   result.setImg(A.getImg()-B.getImg());
   return result;
}
std::istream & operator >>(std::istream &O,complex &c)
{
    int R,I;
    O>>R>>I;
    c.setReal(R);
    c.setImg(I);
    return O;
}
std::ostream & operator<<(std::ostream &O,complex &c)
{
    c.print();
    return O;
}


    int main()
{
  Complex c1(10,20);
    Complex c2(3,4);
    c1.Print();
    Complex x;
//x= c1.Add(c2);
    x=sub(c2,c1);
    //c.setReal(20);
    //c.setImg(30);
    //c.Complex();
    //cout<<x.getReal()<<"  "<<x.getImg();
    x.Print();

    return 0;
}

