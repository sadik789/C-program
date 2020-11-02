#include<iostream>
using namespace std;
class student

 {
  public:
   int a, b, c;
  void Add () 
 {
    cout<<" enter value of a ";
    cin>>a;
    
    cout<<"enter value of b ";
    cin>>b;
    
    c=a+b;
    cout<<" Addition of a&b is"<<c;
  }
  };

     int main() 
 {
    student s;
    s. Add() ;

    return 0;
 }
