#include<stdio.h>
#include<math.h>
#include"quadraticroots.h"

int main(void)
{
    struct QuadraticRootsResult temp1 = findroots(3, 2, -8);
    struct QuadraticRootsResult temp2 = findroots(2.13, 4.26, -6.39);
    struct QuadraticRootsResult temp3 = findroots(2.453999, 3.333333, 5.555555);
    if(temp1.norealroots == 1)printf("No real roots!\n\n");
    else printf("x1: %lf\nx2: %lf\n\n", temp1.x1, temp1.x2);
    if(temp2.norealroots == 1)printf("No real roots!\n\n");
    else printf("x1: %lf\nx2: %lf\n\n", temp2.x1, temp2.x2);
    if(temp3.norealroots == 1)printf("No real roots!\n\n");
    else printf("x1: %lf\nx2: %lf\n\n", temp3.x1, temp3.x2);

    return 0;
}