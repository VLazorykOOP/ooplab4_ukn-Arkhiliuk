#ifndef MATRIXUINT_H
#define MATRIXUINT_H

typedef unsigned int ui;

#include "vectoruint.h"

class MatrixUInt {
private:
  VectorUInt *UIntArray;
  ui rows, cols;
  int codeError;

public:
  static int num_matrix;
  MatrixUInt();
  MatrixUInt(ui size);
  MatrixUInt(ui rows_, ui cols_);
  MatrixUInt(ui rows_, ui cols_, ui value_);
  MatrixUInt(const MatrixUInt &input);
  ~MatrixUInt();

  int getRows() const;
  int getCols() const;
  int getCodeError() const;

  friend std::ostream &operator<<(std::ostream &os, const MatrixUInt &out);
  friend std::istream &operator>>(std::istream &is, const MatrixUInt &in);

  MatrixUInt operator++(int);
  MatrixUInt operator--(int);
  bool operator!();
  MatrixUInt operator~();
  MatrixUInt operator-();
  MatrixUInt operator=(MatrixUInt &input);

  MatrixUInt operator+(MatrixUInt &input);
  MatrixUInt operator+(int input);
  MatrixUInt operator-(MatrixUInt &input);
  MatrixUInt operator-(int input);
  MatrixUInt operator*(MatrixUInt &input);
  MatrixUInt operator*(int input);
  MatrixUInt operator*(VectorUInt &input);
  MatrixUInt operator/(int input);
  MatrixUInt operator%(int input);

  MatrixUInt operator+=(const MatrixUInt &input);
  MatrixUInt operator+=(const int input);
  MatrixUInt operator-=(const MatrixUInt &input);
  MatrixUInt operator-=(const int input);
  MatrixUInt operator*=(const MatrixUInt &input);
  MatrixUInt operator*=(VectorUInt &input);
  MatrixUInt operator*=(const int input);
  MatrixUInt operator/=(const int input);
  MatrixUInt operator%=(const int input);

  MatrixUInt operator|(const MatrixUInt &input);
  MatrixUInt operator^(const MatrixUInt &input);
  MatrixUInt operator^(const int input);
  MatrixUInt operator&(const MatrixUInt &input);
  MatrixUInt operator&(const int input);
  MatrixUInt operator<<=(const int input);
  MatrixUInt operator>>=(const int input);
  MatrixUInt operator>>=(const MatrixUInt &input);
  MatrixUInt operator<<=(const MatrixUInt &input);
  MatrixUInt operator|=(const MatrixUInt &input);
  MatrixUInt operator|=(const int input);
  MatrixUInt operator^=(const MatrixUInt &input);
  MatrixUInt operator^=(const int input);
  MatrixUInt operator&=(const MatrixUInt &input);
  MatrixUInt operator&=(const int input);

  MatrixUInt operator==(const MatrixUInt &input);
  MatrixUInt operator!=(const MatrixUInt &input);
  MatrixUInt operator>(const MatrixUInt &input);
  MatrixUInt operator>=(const MatrixUInt &input);
  MatrixUInt operator<(const MatrixUInt &input);
  MatrixUInt operator<=(const MatrixUInt &input);

  VectorUInt operator[](int);
};

#endif // MATRIXUINT_H
