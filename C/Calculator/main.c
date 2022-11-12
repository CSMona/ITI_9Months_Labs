#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;

    char ch,input;
    int x;


    do{
             printf("Please Enter number 1\n");
    scanf("%d",&num1);
    printf("Please Enter number 2\n");
    scanf("%d",&num2);
     printf("Please Enter Operator (+,-,*,/,%)\n");
            ch=getche();
            printf("\n");
    switch(ch){
case '+':
    x=num1+num2;
    printf("Sum = %d\n", x);
    break;
    case '-':
    x=num1-num2;
    printf("subtraction = %d\n", x);
    break;
    case '*':
    x=num1*num2;
    printf("multiple = %d\n", x);
    break;
    case '/':
    x=num1/num2;
    printf("divation  = %d\n", x);
    break;
    case '%':
    x=num1%num2;
    printf("mod  = %d\n", x);
    break;


    }
     printf("Do you wont to continue y/n\n");
input=getche();
printf("\n");

    }
    while(input=='c'||input =='y');

    return 0;
}
