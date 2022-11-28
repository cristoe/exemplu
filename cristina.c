//prin acest program avem ca scop aflarea sumei a doua numere prime pana la un numar n dat de la tastatura
#include <stdio.h>
//functie pentru verificarea numerelor daca sunt prime
int prim(int n) //functie pentru a verifica daca numarul este prim
{
    int d;
    for(d = 2; d <= n / 2; d++) //0 si 1 nu sunt numere prime, aflam daca are divizori proprii
                               // instructiunea merge pana la n/2 pentru ca nu exista divizori proprii intre n/2 si n
        if(n % d == 0) //conditie ca d sa fie divizor propriu al lui n
           return 0;
    return 1;//exista o eroare
}

int main()
{
    int n = 22;
    int m, k;
    for(m = 2; m <= n; m++)//parcurgem toate numerele pana la n
       for(k = 1; k <= m; k++)
          if(prim(k) && prim(m - k) && k <= m - k)//verificare daca k si m - k sunt numere prime si k<=m-k pentru aflarea acestora
             printf("%d = %d + %d \n", m, k, m - k); //afisarea rezultatului

    return 0;
}