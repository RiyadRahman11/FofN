#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x, n, res, t;
    scanf("%d%d", &x, &n);
    res = x / n;

    if (res * n == x)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
