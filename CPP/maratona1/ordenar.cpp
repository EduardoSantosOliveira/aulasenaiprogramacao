#include<iostream>
#include<string.h>
 
using namespace std;
 
int main(){
    int numero1;
    cout<<"Digite seu primeiro numero: "<<endl;
    cin>>numero1;
    
    int numero2;
    cout<<"Digite seu segundo numero: "<<endl;
    cin>>numero2;
    
    int numero3;
    cout<<"Digite seu terceiro numero: "<<endl;
    cin>>numero3;
 
    if(numero1 > numero2 && numero2 > numero3){
    cout<<"os numeros sao "<< numero3 << numero2 << numero1 <<endl;
}
    if(numero1 > numero3 && numero3 > numero2){
    cout<<"numeros sao "<< numero2 << numero3 << numero1 <<endl;
}
    if(numero2 > numero1 && numero1 > numero3){
    cout<<"numeros sao "<< numero3 << numero1 << numero2 <<endl;
}
    if(numero2 > numero3 && numero3 > numero1){
    cout<<"numeros sao "<<numero1 <<numero3 <<numero2 <<endl;
}
    if(numero3 > numero2 && numero2 > numero1){
    cout<<"numeros sao "<< numero1 << numero2<< numero3 <<endl;
    }
    
    if(numero3 > numero1 && numero1 > numero2){
    cout<<"numeros sao "<< numero2<< numero1 << numero3 <<endl;
}
}
    
