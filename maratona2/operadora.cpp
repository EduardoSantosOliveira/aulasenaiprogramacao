#include<iostream>
#include<iomanip>

using namespace std;

int main(){

   int minutos;
   float valorPago;

   cout<<"Digite a quantidade de minutos: ";
   cin>>minutos;
   
   valorPago = 50.0;
   if(minutos > 100){
      valorPago = valorPago + 2 * (minutos - 100);
   }
   
   cout<<"Valor a pagar: R$ "<<valorPago;
}
