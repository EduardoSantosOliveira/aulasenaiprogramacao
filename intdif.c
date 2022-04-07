#include <stdio.h>
#include <string.h>
void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");


}


int main (){
    abertura();

int primeiro;
    printf("digite seu primeiro numero: ");
        scanf("%d", &primeiro);

int segundo;
    printf("digite seu segundo numero: ");
        scanf("%d", &segundo);

int terceiro;
    printf("digite seu terceiro numero: ");
        scanf("%d", &terceiro);

if(primeiro > segundo && segundo > terceiro){
    printf("%d %d %d", terceiro,segundo,primeiro); 
}

if(primeiro > terceiro && terceiro > segundo){
    printf("%d %d %d",segundo,terceiro,primeiro);
}

if(segundo > primeiro && primeiro > terceiro){
    printf("%d %d %d", terceiro,primeiro,segundo);
}

if(segundo > terceiro && terceiro > primeiro){
    printf("%d %d %d",primeiro,terceiro,segundo);
}

if(terceiro > segundo && segundo > primeiro){
    printf("%d %d %d",primeiro,segundo,terceiro);
}

if(terceiro > primeiro && primeiro > segundo){
    printf("%d %d %d",segundo,primeiro,terceiro);
}
}








