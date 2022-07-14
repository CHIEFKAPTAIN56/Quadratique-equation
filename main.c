#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float a, b, c;
float rout1, rout2;
float rout_part, denom;

printf("Enter the values of a, b, and c\n");
scanf("%f%f%f", &a, &b, &c);

rout_part = sqrt (b*b - 4 * a * c);
denom = 2 * a;

rout1 = ( - b + rout_part) / denom;
rout1 = ( - b - rout_part) / denom;

printf("rout1 = %f\n rout2 =%f", rout1, rout2);


    return 0;
}
