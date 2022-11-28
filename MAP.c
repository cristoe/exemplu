//prin acest program avem ca scop aflarea sumei a doua numere prime pana la un numar n dat de la tastatura
#include <stdio.h>
//functie pentru verificarea numerelor daca sunt prime
int prim(int n)
{
   int d;
   for(d = 2; d <= n / 2; d++)
       if(n % d == 0)
          return 0;
          return 1;//exista o eroare
}

int main()
{
   int n = 22;
   int m, k;
     for(m = 2; m <= n ; m++)
        for(k = 1; k <= m; k++)
           if(prim(k) && prim(m - k) && k <= m - k )
           printf("%d = %d + %d\n", m , k, m - k);
           
    return 0;
}