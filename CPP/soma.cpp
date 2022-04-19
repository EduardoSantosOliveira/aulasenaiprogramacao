#include<iostream>

using namespace std;
   
int main(){

int soma = 0;
int numero;
    cout<<"primeiro numero: "<<endl;
        cin>>numero;
            soma = numero + soma;

while(numero > 0){
    cout<<"digite seu outro numero: "<<endl;
        cin>>numero;
            soma = numero + soma;
}
    cout<<"soma = "<<soma<<endl;
    
}