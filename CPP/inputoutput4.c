#include <stdio.h>

void ler_texto (char *buffer, int length) {
  fgets (buffer, length, stdin);
  strtok (buffer, "\n");
}

void limpar_entrada () {
  char c;
  while ((c = getchar ()) != '\n' && c != EOF)
    {
    }
}

int main(){

     char nome1[50], nome2[50];

      printf ("Nome da primeira pessoa: ");
      ler_texto (nome1, 50);

    float salarioPrimeiro;
        printf("digite o salario da primeira pessoa:");
        scanf("%f", &salarioPrimeiro);

    int idadePrimeiro;
        printf("digite a idade da primeiro pessoa:");
        scanf("%d", &idadePrimeiro);

    char sexoPrimeiro;
        printf("digite o sexo (F/M) da primeira pessoa");
        scanf(" %c", &sexoPrimeiro); 


    printf ("Nome da segunda pessoa: ");
     limpar_entrada ();
         ler_texto (nome2, 50);             

    float salarioSegunda;
        printf("digite o salario da segunda pessoa:");
        scanf("%f", &salarioSegunda);

    int idadeSegunda;
        printf("digite a idade da segunda pessoa:");
        scanf("%d", &idadeSegunda);

    char sexoSegunda;
        printf("digite o sexo (F/M) da segunda pessoa");
         limpar_entrada ();
        scanf("%c", &sexoSegunda);


printf("*********RELATORIO DE DADOS******\n");

printf("nome 1: %s\n ", nome1);
printf("salario 1: %.2f\n", salarioPrimeiro);
printf("idade 1: %d\n", idadePrimeiro);
printf("sexo 1: %c\n\n ", sexoPrimeiro);

printf("nome 2: %s\n ", nome2);
printf("salario 2: %.2f\n", salarioSegunda);
printf("idade 2: %d\n", idadeSegunda);
printf("sexo 2: %c\n ", sexoSegunda);

}