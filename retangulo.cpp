#include<iostream>
#include<iomanip>

using namespace std;

int main(){

  
    float base1;
    float altura1;
    float base2;
    float altura2;
    
    

     
    cout<<"digite a base do primeiro retangulo em cm: ";
    cin>>base1;

    cout<<"digite a altura do primeiro retangulo em cm: ";
    cin>>altura1;
    
    cout<<"digite a base do segundo retangulo em cm: ";
    cin>>base2;

    cout<<"digite a altura do segundo retangulo em cm: ";
    cin>>altura2;

    cout<<fixed<<setprecision(2);
    float area1 = base1*altura1;
    float area2 = base2*altura2;
    
    cout<<"area do primeiro retangulo: "<< area1 << endl;

    cout<<"area do segundo retangulo: "<< area2 << endl;

    if(area1 > area2) {
        cout<<"o primeiro retangulo e maior.";

    }else{
        cout<<"o segundo retangulo e maior.";

    }    
    } 

