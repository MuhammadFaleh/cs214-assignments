#include <stdlib.h>
#include <stdio.h>
#include<iostream>
#include <stdlib.h>
#include <process.h>

using namespace std;
const int size = 5;
void merge(int a[size] , int l , int m , int r){
	int i = l , j = m+1, k =l , temp[size];
	while(i<=m && j<=r){
		if(a[i]>=a[j]){
			temp[k] =a[i];
			i++ , k++;
		}
		temp[k] = a[j];
		j++, k++;
	}
	while(i<=m){
		temp[k] = a[i];
		i++ , k++;
	}
	while(j<=r){
		temp[k]=a[i];
		j++,k++;
	}
	for(int p = l ; p<=r; p++){
		a[p] = temp[p];
	}
}
void mergeSort(int arr[size],int l,int r){
    if(l<r){
        int m =(l+r)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
    }
    return;
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
	mergeSort(a, 0, size - 1);
	arrayPrint(a);
}
