#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#define home 71
#define Left 0X4B
#define Right 0X4D
#define Enter 0X0D
#define esc 0X1B
#define bksp 8
#define del 0x53
#define end 79



void LineEditor(int L,int posx,int posy,int Firstrange,int Lastrange )
{
    int Exitflag=0;
    char Arr[L];
    char ch;
    int current=posx;
    int firstposition=posx ;
    int lastposition=posx;
    char *pcurrentposition=Arr;
    char *pfirstposition=Arr;
    char *plastposition=Arr;
    int i;
    char *ptr;
    char *ptr1;
    char *ptr2;
   // char charinsert;
    int j=0;
    int n=0;
    int k=0;

   void gotoxy( int column, int line )
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}
   /* for(i=0; i<L-1; i++)
    {

        printf("-");;
    }*/
    do
    {
        gotoxy(current,posy);
        ch=getch();
        switch (ch)
        {
        case -32 :
            ch = getch();
            switch (ch)
            {
            case Left :
                if (current>posx)
                {
                    current --;
                    pcurrentposition--;
                }
                break;
            case Right :
                if (pcurrentposition<=plastposition)
                {
                    current++;
                    pcurrentposition++;
                }
                break;

           /* case del:

                if (pcurrentposition<plastposition)
                {


                    ptr1=pcurrentposition;
                    k=0;
                    for (ptr1=pcurrentposition ; ptr1<plastposition ; ptr1++)
                    {
                        *ptr1=*(ptr1+1);
                        gotoxy(current+k,posy);
                        printf("%c",*ptr1);
                        k++;
                    }

                    gotoxy (lastposition-1, posy);
                   // printf ("-");
                    lastposition--;
                    plastposition--;

                }
                break;*/


            }


            break;

        case Enter :
            *plastposition='\0';
            Exitflag = 1;
            break;
        case esc :
            *Arr = '\0';
            Exitflag =1;
            break;

        /*case bksp:
            if (current>posx)
            {


                current--;
                ptr=pcurrentposition;


                j=0;

                for (ptr=pcurrentposition ; ptr<plastposition ; ptr++)
                {
                    *(ptr-1)=*ptr;
                    gotoxy(current+j,posy);
                    printf("%c",*(ptr-1));
                    j++;
                }

                gotoxy (current+j, posy);
                //printf ("-");
                lastposition--;
                plastposition--;
                pcurrentposition--;


            }
            break;*/
        default :
            if ((Firstrange<ch)&&(ch<Lastrange))
            {
                if (isprint(ch))
                {
                    if (pcurrentposition==plastposition)
                    {
                        if (pcurrentposition<=pfirstposition+L)
                        {


                            printf("%c",ch);
                            *pcurrentposition=ch;
                            pcurrentposition++;
                            current++;
                            lastposition++;
                            plastposition++;
                        }
                    }
                    else
                    {
                        printf("%c",ch);
                        *pcurrentposition=ch;
                        pcurrentposition++;
                        current++;
                    }
                    break;
                }

            }
        }
    }
    while (Exitflag==0);

    system("cls");
    printf("%s",Arr);
}





void main()
{
    printf ("Please enter 12 characters only");
    LineEditor(11,10,10,0,225);
    return 0;
}
