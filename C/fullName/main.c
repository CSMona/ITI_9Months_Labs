#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{char str1[10],str2[10],fullname[21];
printf("Enter your first name: ");
gets(str1);
printf("Enter your last name: ");
gets(str2);
strcpy(fullname,str1);
strcat(fullname,"  ");
strcat(fullname,str2);
printf("full name : ");
printf(fullname);


    return 0;
}
