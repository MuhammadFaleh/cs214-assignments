#include <iostream>
#include<process.h>
using namespace std;
int const Size = 1;
int A[Size];
int N=0;

bool IsFull(){ 
	if (N==Size){
		return true;}
	else 
		return false;
	}
bool IsEmpty(){ 
	if (N==0){
		return true;}
	else 
		return false;
	}

int Find_Location_To_Insert (int ITEM){
	int LB =0, UB =N-1;
	int i;
	for(i =LB; i<=UB; i++){
		if (A[i]>ITEM){
			return i;
		}
	}
	return i;
}

int INSERT (int k, int ITEM){
	int J = N-1;
	while(J>=k){
		A[J+1] = A[J];
		J--;
	}
	A[k] = ITEM;
	N++;
}

int Find_Location_To_Delete(int ITEM){
	int LB=0,UB=N-1;
	int i;
	for(i=LB;i<=UB;i++)
	{
		if(A[i] == ITEM)  return i;}
	i= -1; return i; 
	}
int Delete(int k, int ITEM){
	ITEM = A[k];
	for(int j = k; j < Size; j++){
		A[j] = A[j+1];
	}
	N--;
	return ITEM;
}
void Traverse_while(){
	int LB = 0;
	int k = LB;
	int UB = Size;
	while(k< UB){
		cout<<A[k]<<" ";
		k +=1;	
	}
}
void Traverse(){
	int LB = 0;
	int UB = N-1;
	for(int i = LB; i <=UB; i++){
		cout<<A[i]<<" ";
	}
}

void bubbleSort(){
	
}
int main()
{
	int ch, ITEM, K;
	while(1){
		cout<<"\n\n\n\n\n";
		cout<<"\t1- insert value\n";
		cout<<"\t2- delete value\n";
		cout<<"\t3- traverse array\n";
		cout<<"\t4- exit\n\n";
		cout<<"\n\t\tyour choice :";
		cin>>ch;
	switch(ch){
		case 1: if(IsFull( )) {cout<<"\n\nArray is full\n\n"; break;}
		cout<<"\n\n For Insertion, Put a value : ";
		cin>>ITEM;
		K=Find_Location_To_Insert(ITEM);
		INSERT(K, ITEM );
		break;
		case 2: if(IsEmpty( )) {cout<<"\n\nArray is Empty\n\n"; break;}
		cout<<"\n\n For Deletion, Put a value : ";
		cin>>ITEM;
		K= Find_Location_To_Delete(ITEM);
		if(K == -1 ) cout<<"\n\n"<<ITEM<<" Not Found in array \n";
		else cout<<"\n\n "<<Delete(K, ITEM )<< " deleted from array\n ";
		break;
		case 3: if(IsEmpty( )) {cout<<"\n\nArray is Empty\n\n"; break;}
		Traverse();
		break;
		case 4: exit(0);
		default: cout<<"\n\nInvalid choice\n";
}// end of switch
}// end of while loop
return 0;
}// end of main( )
