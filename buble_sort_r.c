#include <stdio.h>
#define DEBUG 1

int *v;
int i;
int f;

int vector[4] = {4, 3, 2, 1};

void bubble_sort(int *v, int n)
{
    int i, j, tmp;

    for (i = 0; i < n; i++)
    {
        tmp = v[i];
        j = i - 1;
        while ((j >= 0) && (v[j] > tmp))
        {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = tmp;
    }
}
void bubble_sort_r(int *v, int n)
{
    if (DEBUG)
    {
        printf("n: %i\n", n);
    }
    // Base case
    if (n == 1)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        if (DEBUG)
        {
            printf("v[i]: %i\n", v[i]);
            printf("v[i+1]: %i\n", v[i + 1]);
        }
        if (v[i] > v[i + 1])
        {
            //invert
            int tmp = v[i];
            v[i] = v[i + 1];
            v[i + 1] = tmp;
        }
        if (DEBUG)
            printf("***********\n");
    }
    bubble_sort_r(v, n - 1);
}

int main()
{
    bubble_sort_r(vector, 4);
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", vector[i]);
    }
    return (0);
}
