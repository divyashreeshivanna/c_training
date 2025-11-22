#include<stdio.h>
#include<stdlib.h>
void main()
{
    int*p=(int*)malloc(4*sizeof(int));
    
    p[0]=13;
    p[1]=14;
    p[2]=15;
    p[3]=16;
    printf("%d %d %d %d",p[0],p[1],p[2],p[3]);
}