#include<iostream>
#include<iomanip>

using namespace std;

int main(){

   string nome;
   float valorHora, pagamento;
   int horasTrabalhadas;

   cout<<"Nome: ";
   cin>>nome;
   cout<<"Valor por hora: ";
   cin>>valorHora;
   cout<<"Horas trabalhadas: ";
   cin>>horasTrabalhadas;
   
   pagamento = valorHora * horasTrabalhadas;
   
   cout<<"O pagamento para "<< nome<<" deve ser "<< pagamento;
}
