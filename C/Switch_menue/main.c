#include <stdio.h>
#include <stdlib.h>

int main()
{
     char ch,input;
    do{
        printf("A-Good Morning\n");
        printf("B-Good After None\n");
        printf("C-Exist\n");
        printf("Choose alphaptic \n");
       ch=getche();
        switch(ch){
        case 'A':
            system("CLS");
            printf("A-Good Morning\n");
            break;
             case 'B':
                  system("CLS");
             printf("B-Good After None\n");
            break;
             case 'C':
                  system("CLS");
            printf("C-Exist\n");
            break;

        }
         printf("Do you wont to continue y/n\n");
input=getche();
printf("\n");

    }
    while(input=='c'||input =='y');
    return 0;
}
