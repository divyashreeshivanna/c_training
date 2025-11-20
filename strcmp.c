#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[50],str2[50];
    printf("enter the first string:");
    scanf("%s",str1);
    printf("enter the second string:");
    scanf("%s",str2);
    if(strcmp(str1,str2)==0)
    {
        printf("string are same\n");
    }
    else
    {
        printf("strings are not same\n");
    }
    return 0;
}