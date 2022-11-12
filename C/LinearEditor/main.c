#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

#define null -32
#define lArrow 75
#define rArrow 77
#define enter 13
#define home 71
#define esc 27
#define end 79

#define bksp 8

void gotoxy( int column, int line )
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ),coord );
}

int main()
{
    int first, last, current, i, flag = 1 ;
    first = last = current = 20;

    char ch, arr[30];
    char *fp, *lp, *cp,*ptr;

    for(int i=0; i<30; i++)
    {
        gotoxy(20+i, 10);
    }

    fp = lp = cp = arr;

    gotoxy(current, 10);
        do
        {
            ch = getch();
            switch(ch)
            {
        case null:
            ch = getch();
            switch(ch)
            {
                case rArrow:
                if(lp>cp)
                {
                    cp++;
                    current++;
                    gotoxy(current, 10);
                }
                break;
            case lArrow:
                if(fp<cp)
                {
                    cp--;
                    current--;
                    gotoxy(current, 10);
                }
                break;
            case home:
                cp = arr;
                current = 20;
                gotoxy(current, 10);
                break;
            case end:
                cp = arr + 30;
                current = last;
                gotoxy(current, 10);
                break;
            }
            break;




            case enter:
               case esc:
            case end:
                *lp = '\0';
                flag = 0;
            break;
/*case bksp:
                if (current >arr + 30){
                   current--;



                ptr=first;


                int j=0;

                for (ptr=first ; ptr<last ; ptr++)
                {
                    *(ptr-1)=*ptr;
                          gotoxy(current, 10);
                    printf("%c",*(ptr-1));
                    j++;
                }

                 gotoxy(current, 10);
                //printf ("-");
                first--;
                current--;
                last--;

                }

                break;*/
            default:
                if(isprint(ch))
                {
                    if(cp < arr + 30)
                        {
                        if(cp == lp){
                            *cp=ch;
                            gotoxy(current, 10);
                            printf("%c", *cp);
                            cp++;
                            lp++;
                            current++;
                            last++;
                        }
                        else{
                            *cp=ch;
                            gotoxy(current, 10);
                            printf("%c", *cp);
                            cp++;
                            current++;
                        }
                    }
                }
                break;
            }
        }
        while(flag == 1);
        system("cls");
        puts(arr);

    return 0;
}
