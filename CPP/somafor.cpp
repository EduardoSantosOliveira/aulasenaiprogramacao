#include<iostream>

using namespace std;

int main(){
    int quantidade;
    int numero;
    int soma = 0;

     cout<<"quantos numeros serao digitados?"<<endl;
    cin>>quantidade;

    for(int i = 1; i <= quantidade; i++){
        cout<<"digite um numero:"<<endl;
        cin>>numero;
        soma = soma + numero;
    }
        cout<<"soma = "<<soma<<endl;

}