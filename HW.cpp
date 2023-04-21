#include<iostream>
using namespace std;

int main(){
char ch;
cout<<"Enter the Value"<<endl;

cin>>ch;
if(ch>='a'&&ch<='z'){
    cout<<"Lower Case"<<endl;
}
else if(ch>='A'&&ch<='Z'){
    cout<<"Upper Case"<<endl;
}
else{
    cout<<"Numeric Value"<<endl;
}


}