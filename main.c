#include <stdio.h>
#include <math.h>

void calc_trig(double deg, double *s, double *c, double *t);

int main(void)
{
    double deg;
    double s, c, t;
    scanf("%lf", &deg);
    /* TODO: calc_trig を呼び出して s, c, t に結果を格納 */

    printf("%.4f,%.4f,%.4f", s, c, t);
    return 0;
}

void calc_trig(double deg, double *s, double *c, double *t)
{
    /* TODO: deg(度) をラジアンに直し、*s, *c, *t にそれぞれ代入する */
}
