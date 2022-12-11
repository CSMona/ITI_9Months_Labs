#include <iostream>

using namespace std;
class Complex
{

private:
    int real;
    int img;
public:
   Complex ()
    {
        real=0;
        img=0;
    }
    Complex (int _img)
    {
        real=0;
        img=_img;
    }
    Complex (int _real,int _img)
    {
        real=_real;
        img=_img;
    }
    ~Complex()
    {
    }
    void setReal(int _real)
    {
        real=_real;
    }
    int getReal() const
    {
        return real;
    }
    void setImg(int _img)
    {
        img=_img;
    }
    int getImg() const
    {
        return img;
    }
    Complex Add(Complex right)
    {
        Complex retVal;
        retVal.real=real+right.real;
        retVal.img=img+right.img;
        return retVal;

    }
    void Print()
    {
        if (real !=0)
        {
            switch (img)
            {
            case 0:
                cout<<real<<endl;
                break;
            case 1:
            case -1:
                cout<<real<<((img>0)?"+":"-")<<"i"<<endl;
                break;
            default:
                cout<<real<<((img>0)?"+":"")<<img<<"i"<<endl;
            }
        }
        else
        {
            switch (img)
            {
            case 0:
                cout<<"0"<<endl;
                break;
            case 1:
            case -1:
                cout<<((img>0)?"i":"-i")<<endl;
                break;
            default:
                cout<<img<<"i"<<endl;
            }
        }
    }

};


Complex Sub (const Complex &left,const Complex &right)
{
    Complex retVal;
    retVal.setReal(left.getReal()-right.getReal());
    retVal.setImg(left.getImg()-right.getImg());
    return retVal;
}
int main()
{

      Complex c1,c2,c3,c4;
    c1.setReal(5);
    c1.setImg(8);
    c1.Print();
    c2.setReal(2);
    c2.setImg(9);
c2.Print();
    //Complex x;
c3= c1.Add(c2);
    c4=Sub(c1,c2);
    //c.setReal(20);
    //c.setImg(30);
    //c.Complex();
    //cout<<x.getReal()<<"  "<<x.getImg();
    c3.Print();

    return 0;
}
