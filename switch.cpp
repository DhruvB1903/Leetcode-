//CALCULATOR
#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"value of a" <<endl;
cin>>a;
cout<<"value of b" <<endl;
cin>>b;
char op;
cout<<"OPERATION" <<endl;
cin>>op;

switch (op)
{
   case '+': cout<<a+b;
    break;
    case '-': cout<<a-b;
    break;
    case '/': cout<<a/b;
    break;
    case '*': cout<<a*b;
    break;

default: cout<<"No operation";
    break;
}











}