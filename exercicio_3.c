#include <stdio.h>

#define DEBUG 1;

void questao3(int *v, int i, int f)
{
    if (i == f)
        return;
    //invert
    int temp = v[i];
    v[i] = v[f];
    v[i] = temp;
    
    questao3(v, i, f - 1);
}

int main()
{
    int vector[4] = {4, 3, 2, 1};
    questao3(vector, 0, 3);
    for (int i = 0; i < 4; i++)
    {
        printf("posição: [%i]: %i\n", i, vector[i]);
    }
}