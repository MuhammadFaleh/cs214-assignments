#include <iostream>
using namespace std;
int const N = 5;

void validiate(int pin[N]){
	int pinLo [N]={5,2,4,1,3};
	int pinHi [N]={9,5,8,4,6};
	int count = 5;
	int i = 0;
	int right=0;
	while(count !=0)
	{
		if((pin[i] <= pinHi[i])&&(pin[i]>= pinLo[i])){
			right = 1;
		}else right = 0;
		i++;
		count--;
		
	}
	if(right == 0 ){
		cout<<"pin is invalid";
	}
	else cout<<"pin is valid";
}


int main(){
	int pin[N];
	for(int i = 0 ; i<5; i++){
	cout<<"\nenter the elments 1 by 1 : ";
	cin>>pin[i];}
	validiate(pin);
}
