#include<iostream>
using namespace std;
const int size = 5;
int arraySortINSERT(int a[size] , int S)
{
	for(int first = 1 ; first <size ; first++){
	
		int temp = a[first],second = first -1 ;
		
		while(second >= 0 && temp > a[second]){
			a [second + 1] = a [second];
			second--;}
			a[second +1 ]= temp;
	}
}
int arrayENTER(int a[size] , int S)
{
cout << "enter your array elments one at a time\n";
for(int i =0; i<size; i++)
{
cin>>a[i];
}
}
int arrayPrint(int a[size] , int S)
{
cout<<" this is after insert sort : \n";
for(int i =0; i<size; i++)
cout<<a[i]<<" ";
}
int main ()
{
int a[size];
arrayENTER (a , size);
arraySortINSERT(a , size);
arrayPrint(a , size);
}
