#include<iostream>
#include<iomanip>

using namespace std;

int main(){

   int salario, porcentagem, aumento, novoSalario;

   cout<<"Digite o salario da pessoa: ";
   cin>>salario;

   if(salario <= 1000.0){
      porcentagem = 20;
   }
   else if(salario <= 3000.0){
        porcentagem = 15;
   }

    else if(salario <= 8000.0){
            porcentagem = 10;
    }
   else{
            porcentagem = 5;
    }
   
   aumento = salario * porcentagem / 100;
   novoSalario = salario + aumento;
   
   cout<<"Novo salario = R$ "<<novoSalario<<endl;
   cout<<"Aumento = R$ "<<aumento<<endl;
   cout<<"Porcentagem = "<<porcentagem<<endl;
   }