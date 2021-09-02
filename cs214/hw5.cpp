#include <iostream>
using namespace std;
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
int check_array(int a1[] , int a2[] ,int size1 , int size2){
	if(size1 != size2){
        cout<<"they are not the same size" << "first array :"<< size1 <<" second array :"<< size2;
        return 0;}
    for(int i = 0; i<size1; i++) {
        if(a1[i] != a2[i]){
        	cout<<"they are not the same\n the elment are diffrent " << "first array :"<< a1[i] <<" second array :"<< a2[i];
        	return 0;}
    }

    cout<<"they are the same";
    return 0;
}
int arrayENTER(int a[],int size){
	int w;
	for(int i = 0 ; i<size; i++){
		w = i+1;
		cout<<"enter array elments"<<w<<": ";
		cin>>a[i];}
	cout<<"\n\n";
}
int main(){
	int size1, size2;
	cout<<"enter the size of the first array\n";
	cin>>size1;
	cout<<"\nenter the size of the second array\n";
	cin>>size2;
	int array1[size1], array2[size2];
	arrayENTER(array1 , size1);
	arrayENTER(array2 , size2);
	BubbleSort(array2 , size2);
	BubbleSort(array1 , size1);
	check_array(array1 , array2 , size1 , size2);
}
