#include <iostream>
#include<process.h>
using namespace std;

int Multi2Matrices(){
	int A[20][20], B[20][20], AB[20][20];
	int x ,y;
	cout<<"enter the x value ";
	cin>>x;
	cout<<"enter the y value ";
	cin>>y;
	A[x][y];
	for(int i =0; i <x; i++){
		for(int j =0; j<y; j++){
			cin>>A[i][j];
		}
	}
	
	int a ,b;
	cout<<"enter the x value ";
	cin>>a;
	cout<<"enter the y value ";
	cin>>b;
	B[a][b];
	for(int i =0; i <a; i++){
		for(int j =0; j<b;j++){
			cin>>B[i][j];
		}
	}
	
	if (y !=a){
		cout<<"Multiplication is not possible, incompatible dimensions";
		return 0;
	}
	char EQ;
	while(1){
	cout<<"pick an eq\n1.*\n2.+\n";
	cin>>EQ;
	switch(EQ){
		case '*':
			AB[x][b];
			for(int i =0; i <x; i++){
				for(int j =0; j<b;j++){
					AB[i][j]=0;
					for(int k =0; k<a; k++){
						AB[i][j] = AB[i][j]+A[i][k]*B[k][j];
					}
				}}
				cout<<"the matrix after the * eq";
			for(int i =0; i <x; i++){
				for(int j =0; j<b;j++){
					cout<<AB[i][j]<<" ";
				}
				cout<<endl;}
		 break;
		 
		 case '+':
		 	if (x ==a && b == y){
		 	AB[x][b];
			for(int i =0; i <x; i++){
				for(int j =0; j<b;j++){
					AB[i][j]=0;
					for(int k =0; k<a; k++){
						AB[i][j] = A[i][k]+B[k][j];
					}
				}}
				cout<<"the matrix after the  eq";
			for(int i =0; i <x; i++){
				for(int j =0; j<b;j++){
					cout<<AB[i][j]<<" ";
				}
				cout<<endl;}}
				break;
		 default :
		 	cout<<"invalid input"<<endl;
}}}


int main(){
	Multi2Matrices();
}
