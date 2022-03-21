#include <stdio.h>
#include <string.h>
void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");


}


int main (){
    abertura();
int numero;
  printf("qual o seu numero:");
  scanf("%d", &numero);

  for(int soma = 1; soma <=10; soma++ ){


  printf("%d x %d = %d\n",soma, numero, soma * numero);
}
}