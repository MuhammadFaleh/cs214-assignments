#include <iostream>
using namespace std;
int Size = 5 ;
int A[5] = {19, 10, 8, 17, 9};;

int find_second_smallest(){
	int first , second;
	first = second = INT_MAX;
	for (int i = 0; i <Size ; i++ ){
		if ( A[i] < first){
			second = first;
			first = A[i];
		}
		else if (A[i] < second && A[i]!=first){
			second = A[i];
		}
	}
	cout <<"The smallest element : "<<first<<"\nThe second smallest element : "<<second<<"\n";
}

int main (){
	find_second_smallest();
}
