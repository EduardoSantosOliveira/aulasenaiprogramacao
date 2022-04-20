#include<iostream>
#include<iomanip>

using namespace std;

int main(){

  int N, i; 
  float x, y, divisao;

   cout<<"Quantos casos voce vai digitar? ";
   cin>>N;
   
   for( i = 1 ; i <= N; i++){

      cout<<"Entre com o numerador: ";
      cin>>x;
      cout<<"Entre com o denominador: ";
      cin>>y;
      
      if(y == 0 ){
         cout<<"DIVISAO IMPOSSIVEL";
      }else{
         divisao = x / y;
         cout<<"DIVISAO = "<<divisao<<endl;
      }
      
   }
}
