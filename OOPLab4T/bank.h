#ifndef BANK_H
#define BANK_H
#include <iostream>
#include <string>
#include <vector>

struct account {
  unsigned int account;
  std::string Name;
  std::string SecondName;
  std::string FromBatya;
  friend std::ostream &operator<<(std::ostream &os, struct account &input) {
    os << "Account id: " << input.account << std::endl;
    os << "Name: " << input.Name << std::endl;
    os << "Second name: " << input.SecondName << std::endl;
    os << "Patronymic: " << input.FromBatya << std::endl;
    return os;
  };
  friend std::istream &operator>>(std::istream &is, struct account &input) {
    std::cout << "Input account id: ";
    is >> input.account;
    std::cout << "Input name: ";
    is >> input.Name;
    std::cout << "Input second name: ";
    is >> input.SecondName;
    std::cout << "Input patronymic: ";
    is >> input.FromBatya;
    return is;
  }
};

class bank {
private:
  static unsigned int count;
  std::vector<account> arr;

public:
  bank();
  ~bank();
  void addAccount();
  void addAccount(unsigned int id, std::string name_, std::string second_,
                  std::string batya);
  void addAccount(account acc);
  void deleteAccount(unsigned int acc);
  bool ifAccountPresent(unsigned int account_);
  static unsigned int getCount();
  account operator[](const unsigned int &accnum);
  unsigned int operator[](account &input);
  void operator()();
  friend std::ostream &operator<<(std::ostream &os, const bank &input);
};

#endif // BANK_H
