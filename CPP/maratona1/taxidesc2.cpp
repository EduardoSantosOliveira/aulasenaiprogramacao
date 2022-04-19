#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    cout<<fixed<<setprecision(2);
    
    int bandeira;
    cout<<"Digite o numero da bandeira <1-SIM> ou <2-NAO>:"<<endl;
    cin>>bandeira;
    
    float kilometragem;
    cout<<"Digite a sua kilometragem: "<<endl;
    cin>>kilometragem;
    
    float taxaMinima = 3.50;
    
    int desconto;
    cout<<"O cliente quer receber desconto <1-SIM> ou <2-NAO>:"<<endl;
    cin>>desconto;
    
    if(bandeira == 1 && kilometragem < 1){
        cout<<"valor da corrida1: "<<taxaMinima;
    }
    if(bandeira == 2 && kilometragem < 1){
        cout<<"valor da corrida2: "<<taxaMinima;
    }
    
    if(bandeira == 1 && kilometragem > 1 && desconto == 2){
        float bandeira = 1.80;
        cout<<"valor da corrida3: "<<kilometragem * bandeira + taxaMinima;
    }
    
   if(bandeira == 2 && kilometragem > 1 && desconto == 2){
        float bandeira = 2.30;
        cout<<"valor da corrida4: "<<kilometragem * bandeira + taxaMinima;
    }
    if(bandeira == 1 && kilometragem > 1 && desconto == 1){
        float bandeira = 1.80;
        cout<<"valor da corrida5: "<<kilometragem * bandeira + taxaMinima * 70/100;
    }
    if(bandeira == 2 && kilometragem > 1 && desconto == 1){
        float bandeira = 2.30;
        cout<<"valor da corrida6: "<<kilometragem * bandeira + taxaMinima * 70/100;
    }
}