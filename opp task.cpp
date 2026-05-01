#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:

    BankAccount(string accNo = "", double bal = 0) {
        accountNumber = accNo;
        balance = bal;
    }

    BankAccount operator + (BankAccount other) {

        string newAccount = "COMBINED_" + accountNumber;
        double newBalance = balance + other.balance;

        BankAccount temp(newAccount, newBalance);

        return temp;
    }

    void show() {
        cout << "\nAccount Number : " << accountNumber << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main() {

    string acc1, acc2;
    double bal1, bal2;
    cout << "Enter first account number: ";
    cin >> acc1;
    cout << "Enter first account balance: ";
    cin >> bal1;
    cout << "\nEnter second account number: ";
    cin >> acc2;
    cout << "Enter second account balance: ";
    cin >> bal2;

    BankAccount account1(acc1, bal1);
    BankAccount account2(acc2, bal2);
    BankAccount account3 = account1 + account2;

    cout << "\n----- First Account -----";
    account1.show();
    cout << "\n----- Second Account -----";
    account2.show();
    cout << "\n----- Combined Account -----";
    account3.show();

    return 0;
}
