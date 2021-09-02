#include <iostream>
using namespace std;
int const N = 6;
void BubbleSort(int A[], int N){
	int pass = 1;
	int swapped  , K;
	for (; pass <N; pass++){
		
		swapped = 0 , K = 0;
		while(K<N-pass){
			if (A[K]>A[K+1]){
				swap(A[K],A[K+1]);
				swapped =1;
				break;
			}
			K++;
		}
			break;
		if (swapped == 0){
			break;
		}
	}
	
}


int main()
{
int A[N]={77,42,35,12,101,6}; //You can also get values from user for the array.
int i;
cout<< "The elements of the array before sorting\n";
for (int i=0; i< N ; i++) cout<< A[i]<<", ";
BubbleSort(A, N);
cout<< "\n\nThe elements of the array after sorting\n";
for (i=0; i< N; i++) cout<<A[i]<< ", ";
return 0;
}
