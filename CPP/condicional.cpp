#include<iostream>

using namespace std;

int main(){
    int hora;
    int horainvalida = 0;


     while(horainvalida == 0){      
        cout<<"Digite uma hora do dia: ";
        cin>>hora;
       


    if(hora <= 12){
        cout<<"Bom dia!"<<endl;
        horainvalida = 0;
    }

    if(hora >= 18 && hora < 24){
        cout<<"boa noite!"<<endl;
        horainvalida = 0;
    }

    if(hora > 12 && hora <= 18)  {
        cout<<"Boa tarde!"<<endl;
         horainvalida = 0;
       
    }
    if(hora > 24){
        cout<<"nao existe"<<endl;
        horainvalida = 1;

     }
   

    //return 0;
}
}