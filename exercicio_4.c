/*
Aqui temos uma forma peculiar de realizar uma multiplicação entre dois números: multiplique o
primeiro por 2 e divida o segundo por 2 até que o primeiro seja reduzido a 1. Toda vez que o primeiro
for impar, lembre-se do segundo. Não considere qualquer fração durante o processo. O produto dos
dois número é igual a soma dos números que foram lembrados.

53  26  13  6   3   1
26  52  104 208 416 832

26+     104+    416+832 = 1378

o mesmo ocorre com 53*26 = 1378

Faça uma função em C que receba dois reais e retorne a multiplicação dos dois, do modo como foi especificado acima. Não é permitido uso de vetore. 

*/

#include <stdio.h>
#include <stdlib.h>

int a = 53;
int b = 26;

int sum = 0;
int i = 0;

void multiplica();

int main(void)
{
   multiplica(); 
   printf("%i", b);
   return 0;
}

void multiplica(){
    while(a <= 1){
        if(i % 2 == 0){
            sum = b + sum;
        }
        a = a/2;
        b = b*2;
        i++;
    }
}





