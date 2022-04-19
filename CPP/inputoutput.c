#include <stdio.h>

void ler_texto (char *buffer, int length) {
  fgets (buffer, length, stdin);
  strtok (buffer, "\n");
}

int main(){

    char nomePrimeira[20];
    printf("digite o nome da primeira pessoa:");
       scanf("%s", &nomePrimeira);

    float salarioPrimeiro;
        printf("digite o salario da primeira pessoa:");
        scanf("%f", &salarioPrimeiro);

    int idadePrimeiro;
        printf("digite a idade da primeiro pessoa:");
        scanf("%d", &idadePrimeiro);

    char sexoPrimeiro;
        printf("digite o sexo (F/M) da primeira pessoa");
        scanf(" %c", &sexoPrimeiro);              

    

    char nomeSegunda[20];
    printf("digite o nome da segunda pessoa:");
       scanf("%s", &nomeSegunda);

    float salarioSegunda;
        printf("digite o salario da segunda pessoa:");
        scanf("%f", &salarioSegunda);

    int idadeSegunda;
        printf("digite a idade da segunda pessoa:");
        scanf("%d", &idadeSegunda);

    char sexoSegunda;
        printf("digite o sexo (F/M) da segunda pessoa");
        scanf(" %c", &sexoSegunda);


printf("*********RELATORIO DE DADOS******\n");

printf("nome 1: %s\n ", nomePrimeira);
printf("salario 1: %.2f\n", salarioPrimeiro);
printf("idade 1: %d\n", idadePrimeiro);
printf("sexo 1: %c\n\n ", sexoPrimeiro);

printf("nome 2: %s\n ", nomeSegunda);
printf("salario 2: %.2f\n", salarioSegunda);
printf("idade 2: %d\n", idadeSegunda);
printf("sexo 2: %c\n ", sexoSegunda);

}
