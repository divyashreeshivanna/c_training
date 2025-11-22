#include<stdio.h>
#include<stdlib.h>
void main()
{
    int*p=(int*)malloc(4*sizeof(int));
p[0]=30;
p[1]=40;
p[2]=10;
p[3]=20;
p=(int*)realloc(p,4*sizeof(int));
p[4]=50;
p[5]=60;
for(int i=0;i<6;i++)
{
printf("%d  ",p[i]);
}
}