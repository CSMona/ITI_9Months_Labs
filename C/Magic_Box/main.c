#include<stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy( int column, int line )
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}

int main()
{

char input;

    do{

            int size;
            printf("Enter Size of Magic Box: ");
    scanf("%d",&size);
    int col;
    int row;
    row=1;
    col=size/2+1;
 for(int i=1;i<=size*size;i++)
    {
        gotoxy(col*size,row*size);
        printf("%d",i);

        if(i%size!=0)
        {
            row--;
            col--;
            if(row<1){row=size;}
            if(col<1){col=size;}
        }
        else
        {
            row++;
            ///useless condition
            if(row>size){row=1;}
        }
    }
    printf("\n");
     printf("Do you wont to continue y/n\n");

input=getche();
 system("CLS");

  printf("Enter Size y/n\n");
printf("\n");

    }
    while(input=='c'||input =='y');


    return 0;
}
