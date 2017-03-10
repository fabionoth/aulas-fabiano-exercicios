
#include<stdio.h>

//Adapte  a  solução  do  exercício  anterior  para  que  a  saída  seja  exatamente  conforme  especificada  na figura2

 

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

/*
Saída
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
