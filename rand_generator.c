#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *fp;
   int i;
   int salario_max = 19000;
   int idade_max = 110;
   int qtd = 10000;

   fp = fopen("censo.txt", "w+");
   for(i = 0; i < qtd; i++){
        fprintf(fp, "%i %i\n", rand() % idade_max + 1, rand() % salario_max + 1);
   }
   fclose(fp);
   exit(1);
   return 0;
}