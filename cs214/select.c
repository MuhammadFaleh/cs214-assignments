#include<iostream>  
using namespace std; 
const int size = 5;
 
int arraySortSELECT(int a[size] , int S){
	int k; int loc , max; 
	for(k = 0; k < S-2; k++){
		max = a[k] , loc = k;
	for(int j = 0; j < S-1; j++){
		if (max < a[j]){
			max = a[j];
			loc = j;
		}
	}}
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
	arraySortSELECT(a , size);
	arrayPrint(a , size);
}
