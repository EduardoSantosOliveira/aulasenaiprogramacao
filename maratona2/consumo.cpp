#include<iostream>
#include<iomanip>

using namespace std;

int main(){

int distancia, combustivel, consumo;

   cout<<"Distancia percorrida: ";
   cin>>distancia;
   cout<<"Combustivel gasto: ";
   cin>>combustivel;
   
   consumo = distancia / combustivel;
   
   cout<<"Consumo medio = "<<consumo;
}
