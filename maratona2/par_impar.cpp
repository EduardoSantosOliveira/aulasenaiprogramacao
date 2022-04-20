#include<iostream>
#include<iomanip>

using namespace std;

int main(){

  int  N, i, x;

    cout<<"Quantos numeros voce vai digitar? "<<endl;
    cin>>N;

    for( i = 1; i <= N; i++){
       cout<<"Digite um numero: "<<endl;
       cin>>x;

       if(x == 0){
           cout<<"NULO"<<endl;
       }
           
               if( x < 0){
                   cout<<"PAR NEGATIVO"<<endl;
               }
                   cout<<"PAR POSITIVO"<<endl;    //nao feito
    
           
            if( x < 0){
                   cout<<"IMPAR NEGATIVO"<<endl;
               }else{
                   cout<<"IMPAR POSITIVO"<<endl;
               }
    
}
}