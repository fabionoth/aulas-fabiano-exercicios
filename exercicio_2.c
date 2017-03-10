
#include<stdio.h>


int main(){
    int valor = 10;
    
    int linha, coluna;

    for(linha = 1; linha < valor; linha++){
        for (coluna = (valor*(-1)); coluna < (valor); coluna++){
            if(coluna == 0){
                printf("%i",linha);
            }
            if(coluna < 0){
                if(linha > (coluna*(-1))){
                    printf("%i",(linha - (coluna *(-1))));
                }else {
                    printf(" ");
                }
            }else if(coluna > 0){
                if(linha > coluna){
                    printf("%i",(linha-coluna));
                }else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
