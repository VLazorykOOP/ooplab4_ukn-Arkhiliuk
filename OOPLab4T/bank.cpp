#include "bank.h"
#include <iostream>

unsigned int bank::count = 0;

unsigned int bank::getCount() { return count; }

account bank::operator[](const unsigned int &accnum) {
  for (unsigned int i = 0; i < arr.size(); i++) {
    if (arr[i].account == accnum) {
      return arr[i];
    }
  }
  std::cout << "Error: item not found." << std::endl;
  account null{0, "0", "0", "0"};
  return null;
}

unsigned int bank::operator[](account &input) {
  for (unsigned int i = 0; i < arr.size(); i++) {
    if (arr[i].account == input.account) {
      return i;
    }
  }
  std::cout << "Error! Can't find item." << std::endl;
  return 0;
}

void bank::operator()() {
  for (unsigned int i = 0; i < arr.size(); i++, std::cout << std::endl) {
    std::cout << "Account id: " << arr[i].account << std::endl;
    std::cout << "Name: " << arr[i].Name << std::endl;
    std::cout << "SecondName: " << arr[i].SecondName << std::endl;
    std::cout << "Patronymic: " << arr[i].FromBatya << std::endl;
  }
}

std::ostream &operator<<(std::ostream &os, const bank &input) {
  for (unsigned int i = 0; i < input.arr.size(); i++, os << std::endl) {
    os << "Account id: " << input.arr[i].account << std::endl;
    os << "Name: " << input.arr[i].Name << std::endl;
    os << "SecondName: " << input.arr[i].SecondName << std::endl;
    os << "Patronymic: " << input.arr[i].FromBatya << std::endl;
  }
  return os;
}

bank::bank() {
  std::cout << "Bank created! Now add some values to it!" << std::endl;
}

bank::~bank() { count = 0; }

void bank::addAccount() {
  account temp_acc;
  std::string temp;
  unsigned int id;
  std::cout << "Input account id: ";
  std::cin >> id;
  if (ifAccountPresent(id)) {
    std::cout << "Error! Account already exist!" << std::endl;
    return;
  }
  std::cout << "Input name: ";
  std::cin >> temp;
  temp_acc.Name = temp;
  std::cout << "Input Second Name: ";
  std::cin >> temp;
  temp_acc.SecondName = temp;
  std::cout << "Input Patronimyc: ";
  std::cin >> temp;
  temp_acc.FromBatya = temp;
  temp_acc.account = id;
  count++;
  arr.push_back(temp_acc);
}

void bank::addAccount(unsigned int id, std::string name_, std::string second_,
                      std::string batya) {
  account tempAccount;
  if (ifAccountPresent(id)) {
    std::cout << "Error! Account already exist!" << std::endl;
    return;
  }
  tempAccount.Name = name_;
  tempAccount.SecondName = second_;
  tempAccount.FromBatya = batya;
  tempAccount.account = id;
  arr.push_back(tempAccount);
  count++;
}

void bank::addAccount(account acc) {
  arr.push_back(acc);
  count++;
}

bool bank::ifAccountPresent(unsigned int account_) {
  for (unsigned int i = 0; i < arr.size(); i++) {
    if (arr[i].account == account_) {
      return true;
    }
  }
  return false;
}

void bank::deleteAccount(unsigned int acc) {
  if (ifAccountPresent(acc)) {
    for (unsigned int i = 0; i < arr.size(); i++) {
      if (arr[i].account == acc) {
        arr.erase(arr.begin() + i);
        std::cout << "Deleted " << acc << " successfully." << std::endl;
        return;
      }
    }
  } else {
    std::cout << "Can't find " << acc << " in bank!" << std::endl;
  }
}
