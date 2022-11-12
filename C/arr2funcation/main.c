#include <stdio.h>
#include <stdlib.h>
void swap(int*a,int int*b){

       int temp;
       temp=*a;
       *a=*b;
       *b=temp;
}

int main() {
    int x=5,y=3;
  swap(&x,&y);
  printf("%d\n",x);
  printf("%d\n",y);
  return 0;
}


