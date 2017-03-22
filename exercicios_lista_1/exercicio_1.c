
#include<stdio.h>

 //Faca um programa em C que imprima exatamente a sa ́ıda especificada na figura 1 (abaixo) de maneira que, em todo o programa, nao aparȩcam mais do que tres comandos de impressao.
 

int main(){
    int valor = 10;
    
    int linha, coluna;
    int aux = 0;

    for(linha = 1; linha < valor; linha++){
        for (coluna = 1; coluna < (valor *2); coluna++){
            if(linha >= coluna){
                printf("%i", coluna);
            }
            else {
                aux = aux + 2;
                if(coluna - aux > 0) {
                    printf("%i", coluna - aux);
                }
            }
        }
        aux = 0;
        printf("\n");
    }
    return 0;
}

/*
outout: 
1
121
12321
1234321
123454321
12345654321
1234567654321
123456787654321
12345678987654321
*/