#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, i, A, V;
    int Ay, Am, Ad, Vy, Vm, Vd;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d%d%d", &Ay, &Am, &Ad);
        scanf("%d%d%d", &Vy, &Vm, &Vd);
        A = (Ad + (Am * 30) + (Ay * 300));
        V = (Vd + (Vm * 30) + (Vy * 300));
        if (A < V)
        {
            printf("Alice\n");
        }
        else if (A > V)
        {
            printf("Vasya\n");
        }
        else
        {
            printf("Twin\n");
        }
    }
   // printf("A=%dV=%d\n", A, V);

    return 0;
}
