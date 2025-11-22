#include<stdio.h>
enum days
{
    monday,tuesday,wednesday,thursday ,friday,saturday
};
void main()
{
    enum days day;
    day=friday;
    printf("%d",day);
}
