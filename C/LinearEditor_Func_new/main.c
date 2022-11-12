#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#define Home 71
#define Left 0X4B
#define Right 0X4D
#define Enter 0X0D
#define esc 0X1B
#define bksp 8
#define del 0x53
#define End 79


  void gotoxy( int column, int line )
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}
void LineEditor(int left,int posx,int posy,int star,int end){
char arr[Left];
int Current=posx;
int firsposition=posx;
int lastposition=posx;

char ch;
char *ptrstar;
char *ptrlast;
char *ptrcurr;
int flag=0;
do{
    gotoxy(Current,posy);
    ch=getch();
    switch(ch){
        //Extended Key
case -32:
    switch(ch){
    ch=getch();
case Left:
    if(Current>posx)
    {
        Current--;
        ptrcurr--;
    }
    break;
case Right:
    if(ptrcurr<=ptrlast)
    {
        Current++;
        ptrcurr++;
    }
    break;


case Home:

    ptrcurr=arr;
    Current=posx;
   gotoxy(Current,posy);
    break;
case End:
    ptrcurr=arr+posy;
    gotoxy(Current,posy);
    break;
    }
    break;

    //Normal Key

case Enter:
    Current='\0';
    flag=1;

    break;
case esc:
        Current='\0';
    flag=1;
    break;
case bksp:
    break;

default:
    if((star<ch)&&(ch<end)){
 if (isprint(ch)){
    if(ptrcurr==ptrlast){

        if(ptrcurr<=ptrstar+left){

            printf("%c",ch);
            *ptrcurr=ch;
            ptrcurr++;
            Current++;
            lastposition++;
            ptrlast++;

        }else{
         *ptrcurr=ch;
            ptrcurr++;
            Current++;


        }
        break;
    }


 }
    }

    }


}while(flag==0);

  system("cls");
    printf("%s",arr);

}
int main()
{
    printf ("Please enter 12 characters only");
    LineEditor(11,10,10,0,225);
    return 0;
}
