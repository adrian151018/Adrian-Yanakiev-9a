#include<stdio.h>
#include<math.h>
#include"quadraticroots.h"

struct QuadraticRootsResult findroots(double a, double b, double c)
{
    struct QuadraticRootsResult koreni;
    double diskriminanta = (b * b) - (4 * a * c); 
    double koren1 = (-b - sqrt(diskriminanta)) / (2 * a);
    double koren2 = (-b + sqrt(diskriminanta)) / (2 * a);
    if(diskriminanta > 0){
        koreni.x1 = koren1;
        koreni.x2 = koren2;
        koreni.norealroots = 0;
    }
    else if(diskriminanta == 0){
        koreni.x1 = -b/(2 * a);
        koreni.x2 = koreni.x1;
        koreni.norealroots = 0;
    }
    else koreni.norealroots = 1;

    return koreni;
}