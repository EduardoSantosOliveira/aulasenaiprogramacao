#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    cout<<fixed<<setprecision(2);

    float taxaMinima = 3.50;

    int bandeira;
    cout<<"Digite o numero da bandeira <1 ou 2>:"<<endl;
    cin>>bandeira;

    float kilometragem;
    cout<<"Digite a kilometragem rodada:"<<endl;
    cin>>kilometragem;




if(bandeira == 1 && kilometragem > 1){
float bandeira = 1.80;
cout<<"valor da corrida: "<<kilometragem * bandeira + taxaMinima;

}

 if(bandeira == 2 && kilometragem > 1){
    float bandeira = 2.30;
    cout<<"valor da corrida: R$"<<kilometragem * bandeira + taxaMinima;
}

 if(bandeira == 1 && kilometragem < 1){     
    cout<<"valor da corrida: "<<taxaMinima;
 }

 if(bandeira == 2 && kilometragem < 1){
    cout<<"valor da corrida: "<<taxaMinima;
 }

}