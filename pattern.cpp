#include<iostream>
using namespace std;
int main() {


/*
     
     1. ***
        ***
        ***
     

      int n;
      cin>>n;

      int i =1;
      
      while(i<=n){
       int j =1;

       while(j<=n){
        cout<<"*";
        j=j+1;
        }

       cout<<endl;
       i=i+1;

      }
 */





     /*
     2. 111
        222
        333
     
    
#include<iostream>
using namespace std;
 
 int n;
 cin>>n;
 int i=1;
 
 while(i<=n){
 int j=1;
 while(j<=n){
 cout<<i;
 j=j+1;

 }
 cout<<endl;
 i=i+1;



 */
     



 /*
   3.   1234
        1234
        1234
     
     
    #include<iostream>
   using namespace std;
   int n;
   cin>>n;
   int i=1;

     
   while(i<=n){
      int j=1;
       while(j<=n){
         cout<<j;
         j=j+1;
   

       }
        cout<<endl;
        i=i+1;

     }

*/







/*
   4.   4321
        4321
        4321
     
     
    #include<iostream>
   using namespace std;
   int n;
   cin>>n;
   int i=1;

     
   while(i<=n){
      int j=1;
       while(j<=n){
         cout<<n-j+1;
         j=j+1;
   

       }
        cout<<endl;
        i=i+1;

     }


*/






/*
   5.    123
         456
         789
         
     
     
    #include<iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int i=1;
   int count=1;

     
   while(i<=n){
      int j=1;
       while(j<=n){
         cout<<count<<" ";
         count=count+1;
         j=j+1;
   

       }
        cout<<endl;
        i=i+1;

     }
*/


/*
   6.    *
         **
         ***
         ****  (triangle pattern) star count = row number i
         

      int n;
      cin>>n;

      int i =1;
      
      while(i<=n){
        int j =1;
        while(j<=n){
           cout<<j;
           j=j+1;


        } 
        cout<<endl;
        i=i+1;
      




      }

*/




/*
   7.    123
         123
         123
         

      int n;
      cin>>n;

      int i =1;
      
      while(i<=n){
        int j =1;
        while(j<=n){
           cout<<j;
           j=j+1;


        } 
        cout<<endl;
        i=i+1;
      




      }

*/

/*
8. 1
   22
   333
   4444
    int n;
    cin>>n;
    int row =1;
    while (row<=n){
      
      int col =1;
      while (col<=row){
         cout<<row;
         col = col+1;


      }
     row = row+1;
     cout<<endl;



    }

*/


/*
9. 1   
   21  
   321 
   4321 

    int n;
    cin >> n;
    int row =1;
    while (row<=n){
        int col=1;
        while(col<=row){

            cout << row-col+1 ;
            col = col + 1;

        }
        cout << endl;
        row=row+1;

    }


*/


/*
10.1   
   21  
   321 
   4321  

    int n;
    cin >> n;
    int row =1;
    while (row<=n){
        int col=1;
        while(col<=row){

            cout << row-col+1 ;
            col = col + 1;

        }
        cout << endl;
        row=row+1;

    }

*/

/*
11. AAA
   BBB
   CCC 
  

    int n;
     
    cin >> n;
    int row =1;
    while (row<=n){
        int col=1;
        while(col<=n){
            char ch = 'A' +row-1 ;
            cout << ch ;
            col = col + 1;

        }
        cout << endl;
        row=row+1;

    }

 */


/*
12. ABC
    ABC
    ABC 
   

    int n;
     
    cin >> n;
    int row =1;
    while (row<=n){
        int col=1;
        while(col<=n){
            char ch = 'A' +col-1 ;
            cout << ch ;
            col = col + 1;

        }
        cout << endl;
        row=row+1;

    }
*/

/*
13. ABC
   DEF
   GHI 
  

    int n;
    char ch = 'A' ; 
    cin >> n;
    int row =1;
    while (row<=n){
        int col=1;
        while(col<=n){
           
            cout << ch ;
             
            ch = ch + 1;
            col = col + 1;

        }
        cout << endl;
        row=row+1;

    }
 */


/*
14. ABC
    BCD
    CDE 
  

    int n;
   char ch = 'A';
    cin >> n;
    int row =1;
    while (row<=n){
        int col=1;
        while(col<=n){
            ch = 'A' + row + col-2;
            cout << ch ;
             
            col = col + 1;

        }
        cout << endl;
        row=row+1;

    }

*/




/*
15. A
    BB
    CCC
  

    int n;
   char ch = 'A';
    cin >> n;
    int row =1;
    while (row<=n){
        int col=1;
        while(col<=row){
            ch = 'A' + row -1  ;
            ;
            cout << ch ;
             
            col = col + 1;

        }
        cout << endl;
        row=row+1;

    }

*/


/*
16. A
    BC
    DEF
    GHIJ
  

    int n;
    char value = 'A';
    cin >> n;
    int row =1;
    while (row<=n){
        int col=1;
        while(col<=row){
               
            cout << value ;
            value = value + 1;
             
            col = col + 1;

        }
        cout << endl;
        row=row+1;

    }

*/

/*
17. A
    BC
    DEF
    GHIJ
  

    int n;
    char value = 'A';
    cin >> n;
    int row =1;
    while (row<=n){
        int col=1;
        while(col<=row){
               
            cout << value ;
            value = value + 1;
             
            col = col + 1;

        }
        cout << endl;
        row=row+1;

    }

*/

/*
18. A
    BC
    CDE        
    DEFG  
  

    int n;
    char ch = 'A';
    cin >> n;
    int row =1;
    while (row<=n){
        int col=1;
        while(col<=row){
               
         ch = 'A' + row + col -2;
            cout << ch ;
            
             
            col = col + 1;

        }
        cout << endl;
        row=row+1;

    }


*/


/*
19. D
    CD
    BCD       
    ABCD
  

    int n;
    char ch = 'A';
    cin >> n;
    int row =1;
    while (row<=n){
        int col=1;
        while(col<=row){
               
         ch = 'A' + row + n;
            cout << ch ;
            
             
            col = col + 1;

        }
        cout << endl;
        row=row+1;

    }

*/


/*
20.    *
      **
     ***
    **** 
    
    int n;
    cin>>n;

    int row = 1;

     while (row<=n){
        // code for space

        int space = n-row;

        while (space){
           cout<< " ";
           space =space - 1;
    
        }
        // Code to print stars
        int col = 1;
    
        while(col<=row){
            cout<<"*";
            col = col + 1;

        }
cout<<endl;
row = row +1;






     } 



*/








}

