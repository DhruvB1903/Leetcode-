/*

//print successive numbers

#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
int i = 1;

while(i<=n) {
  cout<<i<<" ";
  i = i+1;
}

}


//Find sum untill given number 
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int i = 1;
int sum = 0;

while(i<=n) {
  sum = sum + i;
  i = i+1;
}
  cout<<"value of sum is :"<<sum<<endl;

 
}
*/



//Prime or not prime then !%=0, if %=0 not prime

using namespace std;

int main(){
      int n;
      cin>>n;
      int i =2;
      while(i<n){
        if(n%i==0){
          cout<<"Not Prime Number for " <<i<<endl;
        }
         else{
          cout<<"Prime for " <<i<<endl;
         }
         i=i+1;
      }


       
      
      
      
      
      
      
}
