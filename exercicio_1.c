
#include<stdio.h>

 //Faca um programa em C que imprima exatamente a sa ́ıda especificada na figura 1 (abaixo) de maneira que, em todo o programa, n ̃ao apare ̧cam mais do que tres comandos de impressao.
 
int main(){
    int linha, coluna;
    int aux = 0;
    for(linha = 1; linha < 10; linha++){
        for (coluna = 1; coluna < 20; coluna++){
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
