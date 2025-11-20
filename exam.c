#include<stdio.h>
void exam(int m1,int m2,int m3)
{
    if(m1>=40&&m2>=40&&m3>=40)
    {
        printf("CONGRADULATINS YOU PASSED\n");
    }
    else
    {
        printf("YOU ARE FAILED");
    }
    float a=(m1+m2+m3)/3;
    printf("average is=%f",a);
}
void main()
{
    int m1=45;
    int m2=78;
    int m3=56;
    exam(m1,m2,m3);
}