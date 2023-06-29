#include <stdio.h>

int main()
{
    int n, i, x;
    scanf("%d", &n);

    scanf("%d", &x);
    int max = x, min = x;
    int maxC = 1;
    for (i = 1; i < n; i++)
    {
        scanf("%d", &x);
        if (x > max)
        {
            max = x;
            maxC = 1;
        }
        else if (x == max)
        {
            maxC++;
        }
        if (x < min)
        {
            min = x;

        }
       
    }
    if(maxC > min  maxC == min){
        printf("Yes");
    }
    else{
        printf("No");
    }
  
    return 0;
}
