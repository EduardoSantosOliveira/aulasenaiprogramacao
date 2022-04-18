#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    
    cout<<fixed<<setprecision(2);
    int bandeira;
    cout<<"Digite o numero da bandeira <1 ou 2>:"<<endl;
    cin>>bandeira;

    float kilometragem;
    cout<<"Digite a kilometragem rodada:"<<endl;
    cin>>kilometragem;

    if(bandeira == 1){
    float bandeira = 1.80;
    cout<<"valor da corrida: "<<kilometragem * bandeira;

}
 if(bandeira == 2){
    float bandeira = 2.30;
    cout<<"valor da corrida: R$"<<kilometragem * bandeira;
}
}

