#include <iostream>
using namespace std;

class account {
private:
    int AC, a , b ,d;
public:
    int getbalance() {
        cout << "enter your account amount" << endl;
        cin >> AC;
        cout << "inter your debit";
        cin >> d;
        if (AC < 0) {
            AC = 0;
            cout << "you have entered wronge amount , your balance is: " << endl;
        }
        
        return AC;
    }
    void addBalance() {
        int k;
        cout << "\ndo you want do deposit? 1 = yes 2 = no" << endl;
        cin >> k;
        if (k == 1)
        {
            cout << "enter how much money you want to deposit" << endl;
            cin >> a;
            AC +=a;
            cout << " your balance now is: " << a << endl;
        }
    }
    void debitBalance() {
        int w,sum;
        if (d > AC) 
        {
            cout << "Debit amount exceeded account balance." << endl;
        }
        else
        	sum = AC - d;
            cout << "your account balance after paying the debit: " << sum << endl;
        }
};

int main()
{

    account ac[2]; 
    for(int i =0; i <2; i++){
    cout << ac[i].getbalance();
    ac[i].addBalance();
    ac[i].debitBalance();}
    return 0;
}
