

/*
 Para 
 m = 30
 n = 3
 u = "ANA" 
 f = "ANA E MARIANA GOSTAM DE BANANA"
 "ANA" ocorre 4 vezes na frase f.
*/
#include <stdio.h>
#include <stdlib.h>
#define DEBUG 0
int count;

int questao2(char *f, int m, char *u, int n)
{
    if (DEBUG)
        printf("m: %i", m - 1);
    if (m < 0)
    {
        return count;
    }
    if (DEBUG)
    {
        while (getchar() != '\n')
            getchar(); // wait for ENTER
        printf("*****************\n ");
        printf("count:      %i\n ", count);
        printf("u[0]:       %c\n ", u[0]);
        printf("f[%i]:      %c\n ", m - 1, f[m - 1]);
    }
    if (f[m - 1] == u[0])
    {
        int i = n;
        int j = 0;
        while (i > 0)
        {
            if (DEBUG)
            {
                printf("i: %i\n", i);
                printf("f[(m-1) + (i-1)] ((m-1) + i : %i) : %c\n ", (m - 1) + (i - 1), f[(m - 1) + (i - 1)]);
                printf("u[%i] : %c\n ", i - 1, u[i - 1]);
            }
            if (f[(m - 1) + (i - 1)] == u[i - 1])
            {
                j++;
            }
            i--;
        }
        if (DEBUG)
        {
            printf("j: %i\n", j);
        }
        if (j == n)
        {
            count++;
        }
    }
    questao2(f, m - 1, u, n);
}
int main()
{
    count = 0;
    char f[30] = {"ANA E MARIANA GOSTAM DE BANANA"};
    char u[3] = {"ANA"};
    int value = questao2(f, 30, u, 3);
    printf("%i\n", count);
    return (0);
}
