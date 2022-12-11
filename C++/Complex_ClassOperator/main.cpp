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

     Complex(Complex& old)
    {
        this->real=old.real;
        img=old.img;
        cout<<"Copy Constractor "<<endl;
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

     //c1+c2
    Complex operator+(const Complex& right)
    {
        Complex retVal;
        retVal.real=this->real+right.real;
        retVal.img=img+right.img;
        return retVal;
    }
    //c1-c2
    Complex operator-(const Complex& right)
    {
        Complex retVal;
        retVal.real=this->real-right.real;
        retVal.img=img-right.img;
        return retVal;
    }
     //c1+=c2
    Complex& operator+=(const Complex& right)
    {
        this->real=real+right.real;
        img+=right.img;
        return *this;
    }
       //c1-=c2
    Complex& operator-=(const Complex& right)
    {
        this->real=real-right.real;
        img-=right.img;
        return *this;
    }

    //++c1
    Complex operator++()
    {
        real++;
        img++;
        return *this;
    }
   //--c1
    Complex operator--()
    {
        real--;
        img--;
        return *this;
    }
    //c1++
    Complex operator++(int /*dummy*/)
    {
        Complex retVal(this->real,this->img);
        //Complex retVal(*this);  //3+4i
        this->real++;
        img++;
        return retVal;
    }
      //c1--
    Complex operator--(int /*dummy*/)
    {
        Complex retVal(this->real,this->img);
        //Complex retVal(*this);  //3+4i
        this->real--;
        img--;
        return retVal;
    }

    //c1+10
    Complex operator+(int num)
    {
        Complex retVal;
        retVal.real=this->real+num;
        retVal.img=img;
        return retVal;
    }
       //c1-10
    Complex operator-(int num)
    {
        Complex retVal;
        retVal.real=this->real-num;
        retVal.img=img;
        return retVal;
    }
    //c1>c2
    int operator>(Complex right)
    {
        return this->real>right.real&&img>right.img;
    }
    int operator<(Complex right)
    {
        return this->real<right.real&&img<right.img;
    }

    //c1==c2
    int operator==(Complex right)
    {
        return this->real==right.real&&img==right.img;
    }

  //int x=(int)c1;
    operator int()
    {
        return this->real;
    }
};

//10+c1
Complex operator+(int num,Complex right)
{
    Complex retVal;
    retVal.setReal(num+right.getReal());
    retVal.setImg(right.getImg());
    return retVal;

    //return right+num;
}
Complex Sub (const Complex &left,const Complex &right)
{
    Complex retVal;
    retVal.setReal(left.getReal()-right.getReal());
    retVal.setImg(left.getImg()-right.getImg());
    return retVal;
}
int main()
{

    Complex c1(3,4),c2(5,6),c3;

c1.Print();
c2.Print();



    c3=c1+c2;   //c1.operator+(c2)

    //c1+=c2;  //c1.operator+=(c2)
    //c3=++c1;  //c1.operator++()
    //c3=c1++;  //c1.operator++()
    //c3=c1+10;  //c1.operator+(int num)
    c3=10+c1;    //10.operator+(Complex)

    c3.Print();
    if(c1>c2)
    {
        cout<<"C1 > C2: \n";
    c1.Print();
    }
    else
    {
         cout<<"C1 < C2: \n";
        c2.Print();
    }


     /* Complex c1,c2,c3,c4;
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
    c3.Print();*/

    return 0;
}
