//write a c function which will accept one input parameter are and wrriten the perimeter of the circle declare pi as a constant//
#include<stdio.h>
float perimeter(float r)
{
    const float pi=3.14;
    float perimeter=2*pi*r;
    return perimeter;
}
void main()
{
    float r=5;
    printf("%f"\n,perimeter(r));
}