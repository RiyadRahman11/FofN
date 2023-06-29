#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double h, b, a;
    scanf("%lf%lf%lf", &h, &b, &a);
    if (h == -1)
    {
        h = sqrt((b * b) + (a * a));
        printf("%.2lf\n", h);
    }
    else if (a == -1)
    {
        a = sqrt((h * h) - (b * b));
        printf("%.2lf\n", a);
    }
    else if (b == -1)
    {
        b = sqrt((h * h) - (a * a));
        printf("%.2lf\n", b);
    }
    return 0;
}
