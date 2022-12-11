#include "bank.h"
#include <iostream>

using namespace std;

int main() {
  bank A;
  account testAccount;
  cin >> testAccount; // input account from keyboard
  cout << testAccount << endl;
  A.addAccount(testAccount); // from acc
  A.addAccount();            // from keyboard
  A.addAccount(3, "Name3", "secondName3", "Patr3");
  cout << "All accounts: " << endl;
  cout << A << endl;
  cout << "A[2]: " << endl;
  account temp1 = A[2];
  cout << temp1 << endl;
  A.deleteAccount(2);
  cout << "All accounts again:\n";
  A();
  return 0;
}
