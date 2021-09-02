#include <iostream>
#include<process.h>
using namespace std;
 
 
void Darray(int size ,int DA[]){
 	cout<<"enter the elments";
 	for(int i=0; i<size; i++){
 		cin>>DA[i];
	 }
}

int print(int size ,int DA[]){
	for(int i=0; i<size; i++){
		cout<<DA[i]<<" , ";
	}
}
void BubbleSort(int A[], int N){
	int pass = 1;
	int swapped  , K;
	for (; pass <N; pass++){
		
		swapped = 0 , K = 0;
		while(K<N-pass){
			if (A[K]>A[K+1]){
				swap(A[K],A[K+1]);
				swapped =1;
				
			}
			K++;
		}
		if (swapped == 0){
			break;
		}
	}
	
}

double getmedian(int size, int DA[]){
	
	double median;
	if (size % 2 == 1)
	median = DA[(size / 2)];
	else if (size %2 == 0)
	median = (DA[(size /2)] + DA[(size / 2-1)]) /2;
	return median;
}

int main(){
	int size;
	int *DA = new int[size];
	cout<<"enter the size of the array ";
	cin>>size;
	Darray(size,DA);
	BubbleSort(DA , size);
	print(size , DA);
	cout<<"		the median is "<<getmedian(size , DA);
	delete [] DA;
	
}
