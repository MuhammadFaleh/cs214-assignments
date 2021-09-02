#include <iostream>
using namespace std;
int const N=10;
int BinarySearch (int A[], int skey){
	int start = 0 , end =N-1 , mid =int((start+end)/2);
	while (start<=end && A[mid] != skey){
		if(skey<A[mid]){
			end =mid-1;
		}else {start =mid+1;}
		mid=int((start+end)/2);
	}
	if(A[mid] == skey){
		return mid;
	} 
	return -1;
}
int main()
{ int A[N]= {3, 5, 9, 11, 15, 17, 22, 25, 37, 68}, SKEY, LOC;
// You can modify the code to get values from user
cout<<"\n Enter the Search Key: ";
cin>>SKEY;
LOC = BinarySearch(A, SKEY); // Function call
if(LOC == -1)
cout<<"\n The search key is not found in the array\n";
else
cout<<"\n The search key "<<SKEY<< " exist at location "<<LOC<<endl;
return 0;
}

