#include<stdio.h>
enum months
{
    january=1,
     february,march,april,may,june,july,august,september,october,november,december
};
void main()
{
    enum months m;
    m=may;
char *season;
switch(m)
{
    case december: case january: case february:
    season="winter";break;
    case march: case april: case may:
    season="summer";break;
    case june: case july: case august:
    season="rainny";break;
    case september:case october:case november:
    season="monsoon";break;

}
printf("%d is %f",m,season);
}