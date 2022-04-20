#include<iostream>
#include<iomanip>

using namespace std;

int main(){

  int codigo, quantidade;
  float valorPago;

   cout<<"Codigo do produto comprado: ";
   cin>>codigo;
   cout<<"Quantidade comprada: ";
   cin>>quantidade;
   
   if(codigo == 1){
      valorPago = 5.0 * quantidade;
   }
   if(codigo == 2){
      valorPago = 3.5 * quantidade;
   }
   if(codigo == 3){
      valorPago = 4.8 * quantidade;
   }
    if(codigo == 4){
      valorPago = 8.9 * quantidade;
    }
    if(codigo == 5){
      valorPago = 7.32 * quantidade;
    }


    cout<<"Valor a pagar: R$ "<<valorPago;
}
