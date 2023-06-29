#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, i, x, max, min, cmx, cmn, f = 0;
    min = 0, cmx = 0, cmn = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        //     printf("%d\n", i);
        scanf("%d", &x);
        if (i == 1)
        {
            min = x;
            max = 0;
            // cmn++;m
        }
        if (x > max && x > min)
        {
            max = x;
        }
        // if (x > max)
        // {
        //     max = x;
        //     cmx++;
        //     // cmx++;
        // }
        // else if (x < max)
        // {
        //     max = max;
        // }
        if (x == min)
        {
            // min = x;
            // max = 0;
            cmn++;
        }
        if (x == max)
        {
            // min = x;
            // max = 0;
            cmx++;
        }
        // if (x == max)
        // if (f == 1)
        // {
        //     // min = x;
        //     // max = 0;
        //     // cmn++;
        //     printf("\njhh\n");
        // }
        // if (x == max)
        // {
        // min = x;
        // max = 0;

        // }
        // if (x == min)
        // {
        //     cmn++;
        // }
        // if (x >= max && x!=min)
        // {

        //     max = x;
        // }
        // else if (x < max)
        // {

        //     max = max;

        //     x = 0;
        // }
    }
    printf("%d : %d: %d:%d\n", max, min, cmx, cmn);

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
