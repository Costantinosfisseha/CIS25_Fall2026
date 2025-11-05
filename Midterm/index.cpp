#include <iostream>
#include <string>
#include "index.h"
#include <fstream>

using namespace std;
void BankAccount::Make_purchase(double amount){
    if (amount > balance){
        cout<<"Insufficent balance"<<endl;
    }
    else{
        balance-=amount;
        cout<< "Purchase of $"<<amount<<" completed." <<" Balance: "<<balance<<endl;
    }
    Save_trasaction("Purchase: ",amount);
};

void BankAccount::Deposit(double amount){
    if (amount <= balance){
        cout<<"Insufficent balance"<<endl;
    }
    else{
        balance+=amount;
        cout<<"Deposited $"<<amount<<" successfully."<<" Balance: "<<balance<<endl;
    }
    Save_trasaction("Deposit: ",amount);
};

void BankAccount::Print_balance(){
    cout<<"Current balance: "<<balance<<endl;
};

void BankAccount::Save_trasaction(string action, double amount){
    ofstream file("transactions.txt", ios::app);//adds new line to the list 
    if (file.is_open()){
        file<<action<<" of $ "<<amount<<" Current balance: $" << balance << endl;
     
     file.close();
    }
    else{
        cout<<"Could not open the file"<<endl;
     }
};
