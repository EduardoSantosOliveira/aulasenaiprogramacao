#include <stdio.h>
#include <string.h>
void abertura(){
printf("Eduardo dos Santos de Oliveira\n");
printf("Escola Senai Euclides Facchini\n");


}


int main (){
    abertura();
    printf(" nesse taxi entrou perdeu R$3,50");

     float valorminimo = 3.50;

    float bandeiras;

int bandeira;
    printf(" escolha se voce quer a bandeira 1 ou a 2 ");
        scanf("%d", &bandeira);

float kilomentragem;
    printf("quanto voce vai andar: ");
        scanf("%f", &kilomentragem);


   
if(bandeira == 1){
     bandeiras = kilomentragem * 1.80;
        

}else{
    bandeiras = kilomentragem * 2.30;

} 
 if(kilomentragem < 1){
       printf("%.2f", valorminimo);
    
  } else {
         printf("%.2f",bandeiras);

    }

    }
    
    
    
    

  


   

