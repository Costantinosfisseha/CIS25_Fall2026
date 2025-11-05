#include <string>
using namespace std;

class BankAccount{
    public:
    double balance=10;
    void Make_purchase(double amount);
    void Deposit(double amount);
    void Save_trasaction(string action, double amount);
    void Print_balance();
};
