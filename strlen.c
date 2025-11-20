#include<stdio.h>
#include<string.h>
void main()
{
    char name[10]="divyashree";
    char new[6]="hello";
    printf("%c",name[6]);
    printf("length of string is %c\n",strlen(name));
    strcat(new ,name);
    printf("%s",new);
}