#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "graphics.h"
using namespace std;
class shape
{
protected :
     int color;
public:

    shape()
    {
      color = 8;
    }
    void setcol(int C)
    {
        color = C ;
    }
    virtual void draw() = 0;

};
class point
{
private:
    int x;
    int y;

    public:
    point()
    {
        x = y =0;

    }

    point (int a,int b)
    {
        x = a;
        y = b;
    }

    ~point()
    {
        //cout << "destruct!" << endl;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }

    void setX(int n)
    {
        x =n;
    }
    void setY(int m)
    {
        y =m;
    }

    void show()
    {
        cout << "(" <<x <<","<<y<<")"<<endl;
    }

};

class Rect :public shape
{


    point UL;
    point LR;
public:

    Rect (int x1,int y1,int x2, int y2,int c )

    {   UL.setX(x1);
        UL.setY(y1);
        LR.setX(x2);
        LR.setY(y2);
        color = c;

    }

    ~Rect()
    {
           // cout << "destruct!" << endl;
    }
    void draw()
    {
        rectangle( UL.getX(),UL.getY(),LR.getX(),LR.getY() );
        setcolor(color);

    }
};
class Circle:public shape
{
    point p;
    int radius;
    public:
    Circle(int x,int y,int r,int c)
    {
        radius=r;
        color=c;
        p.setX(x);
        p.setY(y);
    }

    void draw()
    {
        setcolor(color);
        circle( p.getX(),p.getY(), radius );
    }

    ~Circle()
    {
           // cout << "destruct!" << endl;
    }

};

class  Line:public shape
{
    point p1;
    point p2;
public:
    Line (int x1,int y1,int x2,int y2,int c)
    {
        p1.setX(x1);
        p1.setY(y1);
        p2.setX(x2);
        p2.setY(y2);
        color =c;
    }

    void draw()
    {
        setcolor(color);
        line(p1.getX(),p1.getY(),p2.getX(),p2.getY());
    }
};
class  Trinagle:public shape
{
    point p1;
    point p2;
    point p3;
public:
     Trinagle(int x1,int y1,int x2,int y2,int x3,int y3, int c)
    {
        p1.setX(x1);
        p1.setY(y1);
        p2.setX(x2);
        p2.setY(y2);
        p3.setX(x3);
        p3.setY(y3);
        color =c;
    }

    void draw()
    {
        setcolor(color);
        line(p1.getX(),p1.getY(),p2.getX(),p2.getY());
        line(p2.getX(),p2.getY(),p3.getX(),p3.getY());
        line(p3.getX(),p3.getY(),p1.getX(),p1.getY());
    }
};

int  main()
{ initgraph();




Circle c(221,90,45,5);
c.draw();

Circle c2(221,270,120,5);
c2.draw();

    Line l2(170 ,235,200,90,5);
    l2.draw();

      Line l3(274,250,240,90,5);
//
l3.draw();

    Line l4(155 ,380,195,322,5);
    l4.draw();

      Line l5(210,324,250,360,5);
//
l5.draw();



   Rect r1(150,360,300,450,100);
    r1.draw();
    Trinagle t(240,409,266,401,287,431,5);
    t.draw();

_getche();
}

