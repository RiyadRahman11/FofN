#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
int main()
{
    int n, i, x, max, min, cmx, cmn;
    max = 0, min = INT_MAX, cmx = 0, cmn = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        // printf("%d\n", i);
        scanf("%d", &x);
        
        if (x > max)
        {

            max = x;
        }
        else if (x < max)
        {

            max = max;

            x = 0;
        }
        if (x > min)
        {

            min = min;
            x = 0;
        }
        else if (x < min)
        {

            min = x;

            x = 0;
        }

        // if (max > x)
        // {
        //     max = max;
        //     // min = x;
        // }

        // else if (max < x)
        // {
        //     max = x;
        // }
        // else if (max == x)
        // {
        //     max = max;
        // }

        // if (min > x)
        // {
        //     min = x;
        //     // min = x;
        // }
        // else if (min < x)
        // {
        //     min = min;
        // }
        // else if (min == x)
        // {
        //     min = min;
        // }

        // if (x == max)
        // {
        //     cmx++;
        // }

        // else if (x == min)
        // {
        //     cmn++;
        // }
    }
    printf("%d : %d\n", max, min);

    // if (cmx == cmn)
    // {
    //     printf("YES");
    // }
    // else
    // {
    //     printf("No");
    // }

    return 0;
}
