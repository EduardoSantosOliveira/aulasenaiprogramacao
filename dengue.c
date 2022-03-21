#include <stdio.h>
#include <string.h>
void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");


}


int main (){
    abertura();

    printf("essas sao as informacoes da dengue em votuporanga:\n");

    int casossuspeitos;
      printf("    casos suspeitos:");
       scanf("%d", &casossuspeitos);

    int casosconfimados;
      printf("    casos confimados:");
       scanf("%d", &casosconfimados);

    int quantidadesdemortes;
      printf("    quantidades de mortes:");
       scanf("%d", &quantidadesdemortes);

    printf("infomacoes sobre a dengue em votuporanga:\n");
    printf("   casos suspeitos: %d\n", casossuspeitos);
    printf("   casos confimados: %d\n", casosconfimados);
    printf("   quantidades de mortes: %d\n", quantidadesdemortes);
    printf("   total de dados: %d", casossuspeitos+casosconfimados+quantidadesdemortes);
}
     
