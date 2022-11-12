#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define UP 72
#define DOWN 80
#define HOME 71
#define END 79
#define ENTER 13
#define ESC 27
#define TAB 9
#define SIZE 10
int main()
{ char ch;
while(ch != 11)
{


   // printf("Enter a character to get it's ASCII: ");
     printf("Enter Key : ");
    ch=getche();
    switch(ch)
    {
    case -32://(char)0X0E:
        ch= getch(); // to get next byte
        printf("\n Extended\n");
        printf("\n ASCII for this Extended key 0x%x \n ",ch);
        break;
        case END://(char)0X0E:
        ch= getch(); // to get next byte
        printf("\n Extended\n");
        printf("\n ASCII for this Extended key 0x%x \n ",ch);
        break;
    default:
         printf("\n Normal \n");
        printf("\n ASCII for this Normal key 0x%x \n ",ch);
        break;
    }




    }
   // printf("ASCII value for %ch = %d ",ch ,ch);

getch();
    return 0;
}
