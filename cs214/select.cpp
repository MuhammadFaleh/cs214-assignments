#include<iostream>  
using namespace std; 
const int size = 5;
 
int arraySELECT(int a[size] , int S){
	int loc , max;
	for(int k = 0; k<=S-2; k++){
		max = a[k]; loc = k;
		for(int j = k+1; j<=S-1; j++){
			if(max < a[j]){ // dadasd
				max = a[j];
				loc = j;
			}
			
		}
		swap(a[k] , a[loc]);
	}
}
int arrayENTER(int a[size] , int S){
	cout << "enter your array elments one at a time\n";
	for(int i =0; i<size; i++){
		cin>>a[i];
	}
}
int arrayPrint(int a[size] , int S){
	cout<<" this is after insert sort : \n";
	for(int i =0; i<size; i++)
		cout<<a[i]<<"  ";
}
int main (){
	int a[size];
	arrayENTER (a , size);
	arraySELECT(a , size);
	arrayPrint(a , size);
}
