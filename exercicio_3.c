/*
Uma agência governamental deseja conhecer a distribuição da população do país por faixa salarial.
Para isto, coletou dados do último censo realizado e criou um arquivo contendo, em cada linha, a idade
de um cidadão particular e seu salário.  As idades variam de zero a 110 e os salários variam de zero a
19.000,00 unidades da moeda local (salário do seu dirigente máximo).
As faixas salariais de interesse são as seguintes:
• de 0 a 3 salários mínimos = 
• de 4 a 9 salários mínimos
• de 10 a 20 salários mínimos
• acima de 20 salários mínimos.
Sendo o salário mínimo igual a 450,00 unidades da moeda local.

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
    
    int count_lines = 0;
    int value = 0;
    int count_firts = 0;
    int count_second = 0;
    int count_thirth = 0;
    int count_fourth = 0;
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
        ++count_lines;
        if(0 < value && ( ((salario_minimo * 3) + 1) > value)){
           count_firts++;
        }
        else if((salario_minimo * 3 ) < value && (((salario_minimo * 9) + 1) > value)){
           count_second++;
        }
        else if((salario_minimo * 9) < value && (((salario_minimo * 20) + 1) > value)){
           count_thirth++;
        }else {
            count_fourth++;
        }
    }

    printf("Primeira faixa: %.2f\n", (double)(100*count_firts)/count_lines );
    printf("Segunda faixa: %.2f\n", (double)(100*count_second)/count_lines);
    printf("Terceira faixa: %.2f\n", (double)(100*count_thirth)/count_lines);
    printf("Quarta faixa: %.2f\n", (double)(100*count_fourth)/count_lines);
    printf("Resultados contabilizados: %i\n", count_lines);

    fclose(fp);
    if (line){
        free(line);
    }
    exit(EXIT_SUCCESS);
}


/*
Result 
Primeira faixa: 7.59
Segunda faixa: 14.83
Terceira faixa: 25.83
Quarta faixa: 51.75
Resultados contabilizados: 10000
*/