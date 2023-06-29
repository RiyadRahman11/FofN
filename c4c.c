#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i, j, p;
    for (i = 1; i <= 110; i++)
    {

        //    printf("I=%d J=%d\n",i,(j);
        for (j = 1; j <= 3; j++)
        {
            p = pow(i, j);
            printf("I = %d J = %d\n", i, p);
            
            // printf("\nP=%dn", pow(j, i));
        }
    }
    
    return 0;
}
