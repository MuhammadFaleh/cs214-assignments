#include <iostream>  
using namespace std;    
int main() {      
int i, n;      
bool is = true;        
cout << "Enter a positive integer: ";      
cin >> n;        if (n == 0 || n == 1) {         
 is = false;      }      else {          
 for (i = 2; i <= n / 2; ++i) {              
 if (n % i == 0) {                  
 is = false;                  
 break;             
  }          
  }     
   }      
   if (is)          
   cout << n << " is a ------ number";      
   else          
   cout << n << " is not a ----- number";        
   return 0;  }




