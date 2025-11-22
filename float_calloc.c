#include<stdio.h>
#include<stdlib.h>
void main()
{
    float*p=(float*)calloc(4,sizeof(float));
p[0]=30;
p[1]=40;
p[2]=10;
p[3]=20;
printf("%f ,%f ,%f ,%f",p[0],p[1],p[2],p[3]);
}