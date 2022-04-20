#include<iostream>
#include<iomanip>

using namespace std;

int main(){

   float X, Y;

   cout<<"Digite dois numeros:";
   cin>>X;
   cin>>Y;
   
   while(X > Y || X < Y){
      if(X < Y){
         cout<<"CRESCENTE!"<<endl;
      
      }else{
         cout<<"DECRECENTE"<<endl;
      }
      cout<<"Digite outros dois numeros:";
      cin>>X;
      cin>>Y;
      

   }
}



