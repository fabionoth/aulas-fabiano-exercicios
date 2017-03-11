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

***************************************************************************
Este exercício contén falhas, favor verificar os ifs finais line: 55

*/


#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void)
{
    FILE *fp;
    char *line = NULL;
    char sub[100];
    size_t len = 0;
    ssize_t read;
    
    int count_lines = 1;
    int value;
    int count_firts, count_second, count_thirth, count_fourth = 0;
    int salario_minimo = 450;


    fp = fopen("censo.txt", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);
    
    while ((read = getline(&line, &len, fp)) != -1) {
        /*
        atoi - string to num
        strncpy - substring
        strcspn - indexof
        sizeof - size of string
        */
        strncpy(sub, line + strcspn(line," "), sizeof(line)-1);

        value = atoi(sub);

        if(0 < value && ((salario_minimo*3) + 1 > value)){
           count_firts++;
        }
        else if((salario_minimo*3) < value && ((salario_minimo* 9) + 1 > value)){
           count_second++;
        }
        else if((salario_minimo* 9) < value && ((salario_minimo*20) + 1 > value)){
           count_thirth++;
        }else {
            count_fourth++;
        }

        count_lines ++;
    }

    printf("%i\n", count_firts);
    printf("%i\n", count_second);
    printf("%i\n", count_thirth);
    printf("%i\n", count_fourth);
    printf("%i\n", count_lines);

    fclose(fp);
    if (line){
        free(line);
    }
    exit(EXIT_SUCCESS);
}