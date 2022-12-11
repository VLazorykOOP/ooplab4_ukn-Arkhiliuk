#ifndef VECTORUINT2_H
#define VECTORUINT2_H
#include <iostream>

class VectorUInt {
private:
  unsigned int *arr;
  unsigned int size;
  int codeError;

public:
  static unsigned int count;
  VectorUInt();
  VectorUInt(unsigned int elems);
  VectorUInt(unsigned int elems, unsigned int value);
  VectorUInt(VectorUInt &inp);
  ~VectorUInt();
  VectorUInt operator++(int);
  VectorUInt operator--(int);
  bool operator!();
  VectorUInt operator~();
  VectorUInt operator-();
  VectorUInt operator=(const VectorUInt &input);
  VectorUInt operator+(const VectorUInt &input);
  VectorUInt operator+(const unsigned int input);

  VectorUInt operator-(const VectorUInt &input);
  VectorUInt operator-(const unsigned int input);

  VectorUInt operator*(const VectorUInt &input);
  VectorUInt operator*(const unsigned int input);

  VectorUInt operator/(const VectorUInt &input);
  VectorUInt operator/(const unsigned int input);

  VectorUInt operator%(const VectorUInt &input);
  VectorUInt operator%(const unsigned int input);

  VectorUInt operator|(const VectorUInt &input);
  VectorUInt operator|(const unsigned int input);

  VectorUInt operator^(const VectorUInt &input);
  VectorUInt operator^(const unsigned int input);

  VectorUInt operator+=(const VectorUInt &input);
  VectorUInt operator+=(const unsigned int input);

  VectorUInt operator-=(const VectorUInt &input);
  VectorUInt operator-=(const unsigned int input);

  VectorUInt operator*=(const VectorUInt &input);
  VectorUInt operator*=(const unsigned int input);

  VectorUInt operator/=(const VectorUInt &input);
  VectorUInt operator/=(const unsigned int input);

  VectorUInt operator%=(const VectorUInt &input);
  VectorUInt operator%=(const unsigned int input);

  VectorUInt operator|=(const VectorUInt &input);
  VectorUInt operator|=(const unsigned int input);

  VectorUInt operator^=(const VectorUInt &input);
  VectorUInt operator^=(const unsigned int input);

  friend std::ostream &operator<<(std::ostream &os, const VectorUInt &out);
  friend std::istream &operator>>(std::istream &is, const VectorUInt &in);

  bool operator==(const VectorUInt &input);
  bool operator!=(const VectorUInt &input);

  unsigned int &operator[](const unsigned int index);
  void operator()();

  bool operator>(const VectorUInt &input);
  bool operator>=(const VectorUInt &input);
  bool operator<(const VectorUInt &input);
  bool operator<=(const VectorUInt &input);
  unsigned int getSize() const;
};

#endif // VECTORUINT2_H
