#include <iostream>
using namespace std;
int const N=10;
int LinearSearch(int A[ ], int SKEY){
	for (int K = 0; K<N; K++){
		if(A[K] == SKEY){
			return K;
		}
	}
	return -1;
}

int main()
{ int A[N]= {9, 4, 5, 1, 7, 78, 22, 15, 96, 45}, Skey, LOC;
// you can modify code to get values from user
cout<<"\n Enter the Search Key: ";
cin>>Skey;
LOC = LinearSearch( A, Skey); // call a function
if(LOC == -1)
cout<<"\n The search key is not in the array\n Un-Successful Search\n ";
else
cout<< "\n The search key  "<<Skey<< " exists at location  "<<LOC<<endl;
return 0;
}

