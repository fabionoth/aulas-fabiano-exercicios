
#include<stdio.h>

//Adapte  a  solução  do  exercício  anterior  para  que  a  saída  seja  exatamente  conforme  especificada  na figura2

 
void print_blanc();
void print_value(int value);

int main(){
    int valor = 10;
    
    int linha, coluna;

    for(linha = 1; linha < valor; linha++){
        for (coluna = (valor*(-1)); coluna < (valor); coluna++){
            if(coluna == 0){
                print_value(linha);
            }
            if(coluna < 0){
                if(linha > (coluna*(-1))){
                    print_value(linha - (coluna *(-1)));
                }else {
                    print_blanc();    
                }
            }else if(coluna > 0){
                if(linha > coluna){
                    print_value(linha-coluna);
                }else {
                    print_blanc();
                }
            }
        }
        printf("\n");
    }
    return 0;
}

void print_blanc(){
    printf(" ");
}
void print_value(int value){
    printf("%i", value);
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
