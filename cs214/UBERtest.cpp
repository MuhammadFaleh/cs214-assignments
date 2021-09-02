#include<iostream>  
using namespace std; 


const int size2= 5;
int newAR[size2] ={0};

int arrayPrint(){
  cout<<" this is after insert sort : \n";
  for(int i =0; i<=size2; i++){
    cout<<newAR[i]<<"  ";}
}



int arraynew(int a[5]){
	for(int i =0; i<=5; i++){
		for(int x = 0; x<=5; x++){
			if (a[i] == a[x]){
				continue;}
				
				
				newAR[i] +=a[x];
				
			}
			
		}
	}


int main (){
	int ar[5] = {11,14,12,17,15};

	arraynew(ar );
	arrayPrint();
}
