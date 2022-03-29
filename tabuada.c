#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numeroescolhido;
    printf("qual tabuada voce quer do 1 a 10:");
    scanf("%d", &numeroescolhido);

    for(int soma = 1;soma <= 10; soma++ ){
    printf("%d x %d = %d\n",soma, numeroescolhido, soma * numeroescolhido);

    }
}