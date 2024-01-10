#include<iostream>
using namespace std;

class ATM{
    public: 
            double withdraw;
            double deposit_amount;
            double bank_balance = 500;
    
    void forcheck_money(){
        cout<<"your Bank Balance is : "<<bank_balance<<endl;
    }

    void deposit(){
       cout<<"Enter the amount you want to deposit:"<<endl;
        cin>>deposit_amount;
        cout<<"The amount you have deposited is : "<<deposit_amount<<endl;
        cout<<"Your Total balance is : "<<bank_balance+deposit_amount<<endl;
    }

    void withdraw_money(){
        cout<<"Enter the amount you want to withdraw : "<<endl;
        cin>>withdraw;
        cout<<"Amount you have withdraw is : "<<withdraw<<endl;
        cout<<"Your remaining amount is : "<<bank_balance - withdraw<<endl;
    }
};

int main(){
    
    ATM ramesh;
    
    int option;

    cout<<"***********WELCOME***************"<<endl;
    cout<<"1 forcheck your Bank Balance"<<endl;
    cout<<"2 for Deposit Money"<<endl;
    cout<<"3 for Withdraw Money"<<endl;
    cin>>option;

    switch (option){

        case 1:
           ramesh.forcheck_money();
           break;

        case 2:
           ramesh.deposit();
           break;

        case 3:
           ramesh.withdraw_money();
           break;
        
        default:
         cout<<"invalid choice";
    }

    return 0;
}