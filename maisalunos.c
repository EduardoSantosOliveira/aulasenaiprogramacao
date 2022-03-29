#include <stdio.h>
#include <string.h>

void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");
}

int main(){

   abertura();

    int alunos;
    printf("quantidade de alunos: ");
    scanf("%d", &alunos);

    int alunas;
    printf("quantidade de alunas: ");
    scanf("%d", &alunas);


    if(alunos > alunas){
      printf("existem mais alunos do que alunas");
    
    }else{
       printf("exitem mais alunas do que alunos");

    }
}
