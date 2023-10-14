#include <iostream>
using namespace std;

int main(){
   int age,expectation,remaining;
   cout<<"Enter your age: ";
   cin>>age;

   while(expectation<age){
      cout<<"Enter how many total years you want to live: ";
      cin>>expectation;
   }
   
   cout<<"You want to live " << expectation << " years and your age is "<< age << " years!"<<endl;
   remaining = expectation - age;
   cout<<"Your remaining years " << remaining <<endl;

   // int x = 5;
   // int* address = &x;
   // int** addOfAddress = &address;

   // cout<<&address<<endl;
   // cout<<addOfAddress<<endl;
};



