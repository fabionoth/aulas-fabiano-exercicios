/*
Uma agência governamental deseja conhecer a distribuição da população do país por faixa salarial.
Para isto, coletou dados do último censo realizado e criou um arquivo contendo, em cada linha, a idade
de um cidadão particular e seu salário.  As idades variam de zero a 110 e os salários variam de zero a
19.000,00 unidades da moeda local (salário do seu dirigente máximo).
As faixas salariais de interesse são as seguintes:
• de 0 a 3 salários mínimos
• de 4 a 9 salários mínimos
• de 10 a 20 salários mínimos
• acima de 20 salários mínimos.
Sendo o salário mínimo igual a 450,00 unidades da moeda local.


*/


#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char *line = NULL;
    
    size_t len = 0;
    ssize_t read;
    int count_lines = 1;


    fp = fopen("censo.txt", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);
    
    while ((read = getline(&line, &len, fp)) != -1) {
        printf("%s", line);
        sizeof(line);
        strcspn(line," ");
        count_lines ++;
    }

    fclose(fp);
    if (line)
        free(line);
    exit(EXIT_SUCCESS);
}