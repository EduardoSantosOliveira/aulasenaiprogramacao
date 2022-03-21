#include <stdio.h>
#include <string.h>
void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");


}


int main (){
    abertura();

    int alunos = 0;
    printf("numero de alunos:");
    scanf("%d", &alunos);

    int alunas = 0;
    printf("numero de alunas: ");
    scanf("%d", &alunas);

    printf("esse e o numero de alunos %d\nesse e o numero de alunas: %d\nesee e o total:%d", alunos, alunas, alunos + alunas);
}

