#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x, y, z, L, i, f = 0;
    i = 0;
    while (1)
    {
        scanf("%d%d%d", &x, &y, &z);
        L = x - y;
         if (L == 0)
        {
            printf("Onek Sad\n");
            f = 1;
        }
        else if (y == 0)
        {
            printf("Onek Happy\n");
            f = 2;
        }    
        else if (L >= z)
        {
            printf("Happy\n");
        }
        else if(L<z)
        {
            printf("Sad\n");
        }
       
      
        
        if (f == 1 || f == 2)
        {
            break;
        }

        i++;
    }
    return 0;
}
