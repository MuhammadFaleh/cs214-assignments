#include <iostream>
#include <string>
using namespace std;

class TicTacToe{
	char orderOP , save , in ,in2;
	string nameOP1 ,nameOP2 ; 
	char borad [3][3] {{'1' , '2' , '3' },{ '4' , '5' ,'6'} ,{'7' ,'8' ,'9'}};

	public:
		void orderAndN(){
			cout<<"player one enter your name\n";
			getline(cin,nameOP1);
			cout<<"choose X or O\n";
			cin>>orderOP;
			cout<<"player two enter your name\n";
			getline(cin,nameOP2);
			if (orderOP == 'X' || orderOP == 'x'){
			save ='O';
			orderOP ='X';
			cout<<"player two you will be playing "<<save;}
			else if (orderOP == 'O' || orderOP == 'o'){
				save ='X';
				orderOP ='O';}
		}
		char userinput(){
			while(1){
			cin>>in;
			if(in != in2){
				if (in == '1')
				borad[0][0] = orderOP;
			else if (in =='2')
				borad[0][1] = orderOP;
			else if (in =='3')
				borad[0][2] = orderOP;
			else if (in =='4')
				borad[1][0] = orderOP;
			else if (in =='5')
				borad[1][1] = orderOP;
			else if (in =='6')
				borad[1][2] = orderOP;
			else if (in =='7')
				borad[2][0] = orderOP;
			else if (in =='8')
				borad[2][1] = orderOP;
			else if (in =='9')
				borad[2][2] = orderOP;
				break ;}
				else if (in ==in2) {cout<<"choose a new place"; continue;}}}
		char useinput1(){
			while (1){
			cin>>in;
			if(in2 != in){
				if (in == '1')
				borad[0][0] = save;
			else if (in =='2')
				borad[0][1] = save;
			else if (in =='3')
				borad[0][2] = save;
			else if (in =='4')
				borad[1][0] = save;
			else if (in =='5')
				borad[1][1] = save;
			else if (in =='6')
				borad[1][2] = save;
			else if (in =='7')
				borad[2][0] = save;
			else if (in =='8')
				borad[2][1] = save;
			else if (in =='9')
				borad[2][2] = save;
			break;}else if (in ==in2) {cout<<"choose a new place"; continue;}}}		
		
		void DuringROUND(){
			cout<<"player one you may choose any of place\n";

			for(int x = 0; x<3; x++){
				for (int y = 0; y<3; y++ ){
					cout<<borad[x][y]<<" ";
				}
				cout<<"\n";
			}
			userinput();
		for(int x = 0; x<3; x++){
			for (int y = 0; y<3; y++ ){
				cout<<borad[x][y]<<" ";
			}
			cout<<"\n";
			}
		cout<<"player two you may choose any of place that is not taken\n";	
			useinput1();
		
			for(int x = 0; x<3; x++){
			for (int y = 0; y<3; y++ ){
				cout<<borad[x][y]<<" ";
			}
			cout<<"\n";
			}}
};
int main(){
	TicTacToe T1;
	char choise;
	while (choise !='-1')
	cout<<"1.single player(player vs pc)\n2.two player(player vs player)";
	cin>>choise;
	if(choise =='2'){
			T1.orderAndN();
			T1.DuringROUND();
	}
	if (choise =='1'){
		
	}

}
