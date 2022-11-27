#include <stdio.h>

int prim(int n) //functie pentru a verifica daca numarul este prim
{
    int d;
    for(d = 2; d <= n / 2; d++)
        if(n % d == 0)
           return 0;
    return 1;
}

int main()
{
    int n=22;
    int m, k;
    for(m = 2; m <= n; m++)
       for(k = 1; k <= m; k++)
          if(prin(k) && prim(m - k) && k <= m - k)
             printf("%d = %d + %d \n", m, k, m-k);

    return 0;
}