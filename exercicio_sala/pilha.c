#include <stdio.h>
#include <stdlib.h>



struct Pilha
{
    int topo;
    int *valor;
} pilha;

void start()
{
    pilha.topo = -1;
}

void add(int value)
{
    pilha.topo++;
    pilha.valor = &value;
}

int delete(){
    if(isEmpty()){
        return -1;
    }
    pilha.topo--;
    return *pilha.valor;
}

int isEmpty(){
    if(pilha.topo == -1){
        return 1;
    }else {
        return 0;
    }
}

int main()
{
    add(1);
    delete();
    return (0);
}