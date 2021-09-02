#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

class TicTacToe{
	char orderOP , save , in ,in2 ,pcR;
	string nameOP1 ,nameOP2; 
	int i;
	char borad [3][3] {{'1' , '2' , '3' },{ '4' , '5' ,'6'} ,{'7' ,'8' ,'9'}};
	char WPFORN ; // Wanna play first or no 
	public:
		void orderAndN(){
			cout<<"player one enter your name\n";
			cin.ignore();
			getline(cin,nameOP1);
			cout<<"player two enter your name\n";
			cin.ignore();
			getline(cin,nameOP2);
			while (1){
			cout<<"player one choose X or O\n";
			cin>>orderOP;
		
			if (orderOP == 'X' || orderOP == 'x'){
			save ='O';
			orderOP ='X';
			in2 ='X';
			cout<<"player two you will be playing "<<save<<endl;
			break;}
			else if (orderOP == 'O' || orderOP == 'o'){
				save ='X';
				orderOP ='O';
				in2 ='O';
				
				cout<<"player two you will be playing "<<save<<endl;
				break;
				}else continue;}
				
		}
		void player1(){
			cout<<"enter your name\n";
			cin.ignore();
			getline(cin,nameOP1);
			nameOP2 ="pc";
			cout<<"wanna go first?\n1.Yes\n2.No\n";
			while(1){
			cin>>WPFORN;
			if ( WPFORN=='1'){
				cout<<"you will go first";
				break;
			}
			if ( WPFORN == '2'){
				cout<<"pc will go first";
				break;
			}else continue;}
			while (1){
			cout<<"player one choose X or O\n";
			cin>>orderOP;
		
			if (orderOP == 'X' || orderOP == 'x'){
			pcR ='O';
			orderOP ='X';
			in2 ='X';
			cout<<"pc will be playing "<<save<<endl;
			break;}
			else if (orderOP == 'O' || orderOP == 'o'){
				pcR ='X';
				orderOP ='O';
				in2 ='O';
				
				cout<<"pc will be playing"<<save<<endl;
				break;
		}}}
		void changingOrder(){
			if (orderOP == 'X'){
				orderOP ='O';
			}else if (orderOP == 'O'){
				orderOP ='X';
			}
		}
		
		
		char userinput(){
			int u;
			cin>>in;
			for(int x = 0; x<3; x++){
				for (int y = 0; y<3; y++ ){
					if (borad[x][y] == in){
					borad[x][y] = orderOP;
					u=1;	}
				}}
				if (u !=1){
					cout<<"place is already taken enter another";
					userinput();
				}}
		void DuringROUND2(){
			cout<<"player one you may choose any of place\n";
		
			
			if (i ==1){
					exit(0);
					
				}
			if (WPFORN == '1'){
						for(int x = 0; x<3; x++){
				for (int y = 0; y<3; y++ ){
					cout<<borad[x][y]<<" ";
				}
				cout<<"\n";
			}
				winOrDraw();
			userinput();
			random();}	if (WPFORN == '2'){
								random();
					for(int x = 0; x<3; x++){
				for (int y = 0; y<3; y++ ){
					cout<<borad[x][y]<<" ";
				}
				cout<<"\n";
			}
				winOrDraw();
				userinput();
			}
		}
		void random(){
			int i;
			int u;
			char xd;
			
			if (i == 1)
				xd = '1';
			if (i == 2)
				xd = '2';
			if (i == 3)
				xd = '3';
			if (i == 4)
				xd = '4';
			if (i == 5)
				xd = '5';
			if (i == 6)
				xd = '6';
			if (i == 7)
				xd = '7';
			if (i == 8)
				xd = '8';
			if (i == 9)
				xd = '9';
			for(int x = 0; x<3; x++){
				for (int y = 0; y<3; y++ ){
					if (borad[x][y] == xd){
					borad[x][y] = pcR;
					u=1;	}
				}}
				if (u !=1){
					random();
				}}
			
			
		void DuringROUND(){
			if (orderOP == in2){
			cout<<"player one you may choose any of place\n";}else cout<<"player two you may choose any of place\n";
				winOrDraw();
			for(int x = 0; x<3; x++){
				for (int y = 0; y<3; y++ ){
					cout<<borad[x][y]<<" ";
				}
				cout<<"\n";
			}
			if (i ==1){
					exit(0);
					
				}
			userinput();
			changingOrder();
}
	void winOrDraw(){
		for(int x = 0; x<3; x++){
		if(borad[x][0] == 'X' &&borad[x][1] == 'X' &&borad[x][2] == 'X'){i=1;
			if (in2 == 'X')
			cout<<"the winner is " <<nameOP1<<endl;
			else if (in2 == 'O')  cout<<"the winner is " <<nameOP2<<endl;
		}
		if(borad[x][0] == 'O' &&borad[x][1] == 'O' &&borad[x][2] == 'O'){i=1;
		if (in2 == 'O')
			cout<<"the winner is " <<nameOP1<<endl;
			else if (in2 == 'X')  cout<<"the winner is " <<nameOP2<<endl;
		}}
	for(int x = 0; x<3; x++){
		if(borad[0][x] == 'X' &&borad[1][x] == 'X' &&borad[2][x] == 'X'){i=1;
			if (in2 == 'X')
			cout<<"the winner is " <<nameOP1<<endl;
			else if (in2 == 'O')  cout<<"the winner is " <<nameOP2<<endl;
		}
		if(borad[0][x] == 'O' &&borad[1][x] == 'O' &&borad[2][x] == 'O'){i=1;
			if (in2 == 'O')
			cout<<"the winner is " <<nameOP1<<endl;
			else if (in2 == 'X')  cout<<"the winner is " <<nameOP2<<endl;
	}}
	if(borad[0][0] == 'X' &&borad[1][1] == 'X' &&borad[2][2] == 'X'){i=1;
				if (in2 == 'X')
			cout<<"the winner is " <<nameOP1<<endl;
			else if(in2 == 'O') cout<<"the winner is " <<nameOP2<<endl;
		}
	if(borad[0][0] == 'O' &&borad[1][1] == 'O' &&borad[2][2] == 'O'){i=1;
				if (in2 == 'O')
			cout<<"the winner is " <<nameOP1<<endl;
			else if(in2 == 'X') cout<<"the winner is " <<nameOP2<<endl;
		}
		
	if(borad[2][0] == 'X' &&borad[1][1] == 'X' &&borad[0][2] == 'X'){i=1;
				if (in2 == 'X')
			cout<<"the winner is " <<nameOP1<<endl;
			else if(in2 == 'O') cout<<"the winner is " <<nameOP2<<endl;
		
		
	}	if(borad[2][0] == 'O' &&borad[1][1] == 'O' &&borad[0][2] == 'O'){i=1;
				if (in2 == 'O')
			cout<<"the winner is " <<nameOP1<<endl;
			else if(in2 == 'X') cout<<"the winner is " <<nameOP2<<endl;
		
		for(int x = 0; x<3; x++){
				if (borad[0][0] != '1'&&borad[0][1] !='2'&borad[0][2] !='3'&&borad[1][0] !='4'&&borad[1][1] !='5'&&borad[1][2] !='6'&&borad[2][0] !='7'&&borad[2][1] !='8'&&borad[2][2] !='9'){
						cout<<"draw";
					}
				}}
	}
	
};
int main(){
	TicTacToe T1;
	char choise;
	while (1){
	cout<<"pick one \n1.single player(player vs pc)\n2.two player(player vs player)\n3.end\n";
	cin>>choise;
	if(choise =='2'){
	T1.orderAndN();
	for(int i =0; i<9;i++){
	T1.DuringROUND();}
	}
	if (choise =='1'){
			T1.player1();
			for(int i =0; i<9;i++){
			T1.DuringROUND2();}
	}
	if (choise =='3'){
		break;
	}}
}
