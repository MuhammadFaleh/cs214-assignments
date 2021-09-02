#include <stdlib.h>
#include <stdio.h>
#include<iostream>
#include <stdlib.h>
#include <process.h>

using namespace std;
const int size = 5;

int C[size][10];

void radixsort(int R , int a[size]){
	if(size > 1){
		int d, flag = 0 , p =-1 , x ;
			d =  R/10;
			for(int i =0; i<size; i++){
				for(int j =0; j<10; j++){
					C[i][j] = -1;}	
			}
			for(int i =0; i<size; i++){
				x = a[i] % R;
				int m = x/d;
				if(m>0){
					flag =1;}
					
				C[i][m] = a[i];
				
			}
			for(int j =9; j>=0; j--){
				for(int i = 0; i<size; i++){
					if (C[i][j] != -1){
						p = p + 1;
						a[p] = C[i][j];
					}
				}
			}
			if(flag == 1){
				radixsort(R*10 , a);	}
				
	} 
	
}

int arrayENTER(int a[size]){
	cout << "enter your array elments one at a time\n";
	for(int i =0; i<size; i++){
		cin>>a[i];
	}
}
int arrayPrint(int a[size]){
	cout<<" this is after insert sort : \n";
	for(int i =0; i<size; i++)
		cout<<a[i]<<"  ";
}
int main (){
	int a[size];
	arrayENTER (a);
	radixsort(10 ,a);
	arrayPrint(a);
}
