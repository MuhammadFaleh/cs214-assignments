#include <iostream>
using namespace std;
int const Size = 10;
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

int find_second_biggest(){
	int first , second;
	first = second = INT_MIN;
	for (int i ; i < Size ; i++ ){
		if ( A[i] > first){
			second = first;
			first = A[i];
		}
		else if (A[i] > second && A[i]<first){
			second = A[i];
		}
	}
	cout <<"The biggest element : "<<first<<"\nThe second biggest element : "<<second<<"\n";
}
int find_second_smallest(){
	int first , second;
	first = second = INT_MAX;
	for (int i = 0; i < N ; i++ ){
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

int main()
{
	int ch, value, K;
	while(1){
		cout<<"\n";
		cout<<"1- insert value\n";
		cout<<"2- delete value\n";
		cout<<"3- traverse array\n";
		cout<<"4- find second biggest\n";
		cout<<"5- find second smallest\n";
		cout<<"6- exit\n\n";
		cout<<"\nYour choice : ";
		cin>>ch;
	switch(ch){
		case 1: if(IsFull( )) {cout<<"\n\nArray is full\n\n"; break;}
		cout<<"\nType the value to insert : ";
		cin>>value;
		K=Find_Location_To_Insert(value);
		INSERT(K, value );
		break;
		
		case 2: if(IsEmpty( )) {cout<<"\n\nArray is Empty\n\n"; break;}
		cout<<"\n For Deletion, Put a value : ";
		cin>>value;
		K= Find_Location_To_Delete(value);
		if(K == -1 ) cout<<"\n"<<value<<" Not Found in array \n";
		else cout<<"\n"<<Delete(K, value )<< " deleted from array\n ";
		break;
		
		case 3: if(IsEmpty( )) {cout<<"\nArray is Empty\n\n"; break;}
		Traverse();
		break;
		
		case 4: 
		if(IsEmpty( )) {cout<<"\nArray is Empty\n\n"; break;}
		find_second_biggest();
		break;
		
		case 5: 
		if(IsEmpty( )) {cout<<"\nArray is Empty\n\n"; break;}
		find_second_smallest();
		break;
		
		case 6: exit(0);
		default: cout<<"\nInvalid choice\n";}
}
return 0;}
