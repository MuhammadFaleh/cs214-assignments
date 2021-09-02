#include <stdlib.h>
#include <stdio.h>
#include<iostream>
#include <stdlib.h>
#include <process.h>

using namespace std;
const int size = 5;

void Qsort(int data[], int left, int right){
	int pivot, i, j;
	i = left; j = right; pivot = (left + right) / 2;
	do{
		while (data[i] > data[pivot]) i++;
		while (data[j] < data[pivot] ) j--;
		if (i <= j){ 
			int temp = data[i];
			data[i] = data[j];
			data[j] = temp;
			i++; j--;
		}
	}while (i <= j);
	if (left < j) Qsort(data, left, j);
	if (i < right) Qsort(data, i, right);
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
	Qsort(a,0,size-1);
	arrayPrint(a);
}
