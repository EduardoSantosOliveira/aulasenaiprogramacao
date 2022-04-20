#include<iostream>
#include<iomanip>

using namespace std;

int main(){

  float idade, soma, cont;  
  float media;

   soma = 0;
   cont = 0;
   cout<<"Digite as idades:";
   cin>>idade;
   
   while(idade >= 0){
      soma = soma + idade;
      cont = cont + 1;                              // nao feito
      cin>>idade;
   }
      
   if(cont = 0){
      cout<<"IMPOSSIVEL CALCULAR";
    }else{
      media = soma / cont;
      cout<<"MEDIA = "<<media;
    }
}
