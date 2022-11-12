#include <stdio.h>
#include <stdlib.h>

int main(void){
    char str[20];
    char reverse[20];
    int c;
    int i;
    int j = 0;
    int k;

    printf("Enter a string: ");
    i=0;
    j=0;

    while((i<20)&&((c=getchar())!='\n')){
        str[i] = c;
        i++;
    }

    k=i;

    while(i >= 0){
        reverse[j]=str[i-1];
        j++;
        i--;
    }
    ++i;

    printf("\n");

    if(i==0){
        while(i<k){
            putchar(reverse[i]);
            i++;
        }
    }else{
        printf("logic error");
    }
    printf("\n");

    return 0;
}
