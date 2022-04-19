#include <iostream>
#include<iomanip>
#include<string>
#include<climits>


using namespace std;

int main(){

    double salario1, salario2;
    string nome1, nome2;
    int idade1, idade2;
    char sexo1, sexo2;


  cout << fixed << setprecision(2);

   cout<<"nome da primeira pessoa:";
   getline(cin, nome1);

   cout<<"salario da primeira pessoa:";
   cin>> salario1;

   cout<<"idade da primeira pessoa:";
   cin>> idade1;

   cout<<"sexo da primeira pessoa:";
   cin>> sexo1;


   cout<<"nome da segunda pessoa:";
   cin>> nome2;

   cout<<"salario da segunda pessoa:";
   cin>> salario2;

   cout<<"idade da segunda pessoa:";
   cin>> idade2;

   cout<<"sexo da segunda pessoa:";
   cin>> sexo2;

 cout<<"nome 1 :"<<nome1<<endl;
 cout<<"salario 1 :"<<salario1<<endl;
 cout<<"idade 1 :"<<idade1<<endl;
 cout<<"sexo 1 :"<<sexo1<<endl<<endl;

 cout<<"nome 2 :"<<nome2<<endl;
 cout<<"salario 2 :"<<salario2<<endl;
 cout<<"idade 2 :"<<idade2<<endl;
 cout<<"sexo 2 :"<<sexo2<<endl;

 
}