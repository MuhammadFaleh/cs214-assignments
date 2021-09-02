#include <iostream>
#include <string>
using namespace std;

string check(string a[], int size){
	int longest = a[0].length();
	int place = 0;
	for(int i=0; i<size; i++){
		if (longest < a[i].length()){
			longest = a[i].length();
			place =i;
		}
	}
	cout<<"the longest string is : "<<a[place]<<" | in the place : "<< place  <<" | with the length : "<< longest;
}
getsize(){
	int size;
	cout<<"enter the size of the  array\n";
	cin>>size;
	return size;
}
enter(string a1[],int size){
	int w;
	cin.ignore();
	for(int i = 0; i<size; i++){
		w = i+1;
		cout<<"enter array elments"<<w<<": ";
		getline(cin,a1[i]);
		
	}
}

int main(){
	int size;
	size =getsize();
	string array1[size];
	enter(array1 ,size);
	
	check(array1, size);
}
