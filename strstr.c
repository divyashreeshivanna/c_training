#include<stdio.h>
#include<string.h>
void main()
{
    char dse[100]="we are super kids";
    char se[10]="super";
    if ((strstr(dse,se))!=NULL)
    printf("Found");
    else
    printf("not found");
}
//out put is found when the word super is persist in the statement//
//if it is not there it shows not found//