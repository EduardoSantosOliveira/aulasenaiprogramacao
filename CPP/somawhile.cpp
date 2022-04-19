#include<iostream>

using namespace std;

int main(){
    int quantidade;
    int numero;
    int soma = 0;
    int i = 1;

    cout<<"quantos numeros serao digitados?"<<endl;
        cin>>quantidade;

    while (i <= quantidade){
        cout<<"digite outro numero: "<<endl;
            cin>>numero;
                soma = soma + numero;
                    i++;
    }
    cout<<"Soma = "<<soma<<endl;
    
}