#include "matrixuint.h"
#include "vectoruint2.h"
#include <iostream>

using namespace std;

int main() {
  MatrixUInt A;
  MatrixUInt B(2);
  MatrixUInt C(3, 3);
  MatrixUInt D(3, 3, 3);
  MatrixUInt Ccopy(C);
  cout << "A:\n" << A << endl;
  cout << "B:\n" << B << endl;
  cout << "C:\n" << C << endl;
  cout << "D:\n" << D << endl;
  cout << "Ccopy:\n" << Ccopy << endl;
  cout << "Matrix count: " << A.num_matrix << endl;
  //  cout << "Enter C:\n";
  //  cin >> C;
  //  cout << "Entered C: \n" << endl;
  //  cout << C << endl;
  //  C++;
  //  cout << "C++:\n" << C << endl;
  //  C--;
  //  cout << "C--:\n" << C << endl;
  //  cout << !C << endl;
  cout << "~D:\n" << D << endl;
  cout << "-D:\n" << D << endl;
  MatrixUInt F = D;
  cout << "F=D:\n" << F << endl;
  cout << "B+C:\n" << B + C << endl;
  cout << "B-C:\n" << B - C << endl;
  MatrixUInt x1(3, 3, 1);
  MatrixUInt x2 = x1;
  cout << "x1=x2=\n" << x1 << endl;
  cout << "x1*x2:\n" << x1 * x2 << endl;
  cout << "x1*5:\n" << x1 * 5 << endl;
  VectorUInt vec1(3, 1);
  cout << "Vec1:\n" << vec1 << endl;
  cout << "x1*vec1:\n" << x1 * vec1 << endl;
  MatrixUInt x3(2, 2, 10);
  cout << "X3:\n" << x3 << endl;
  x3 += x3;
  cout << "x3 += x3:\n" << x3 << endl;
  x3 -= x3 / 2;
  cout << "x3 -= x3/2:\n" << x3 << endl;

  cout << "x3 / 5:\n" << x3 / 5 << endl;
  cout << "x3 % 5:\n" << x3 % 3 << endl;
  cout << "x3 | x3:\n" << (x3 | x3) << endl;
  cout << "x3 ^ x3:\n" << (x3 ^ x3) << endl;
  cout << "x3 ^ 5:\n" << (x3 ^ 5) << endl;
  cout << "x3 & x3:\n" << (x3 & x3) << endl;
  cout << "x3 & 5:\n" << (x3 & 5) << endl;
  x3 <<= (int)2;
  cout << "X3 <<=2 (*4):\n" << x3;
  x3 >>= (int)2;
  cout << "x3 >>2 (/4):\n" << x3;
  MatrixUInt cc(3, 3, 5);
  MatrixUInt cd(3, 3, 5);
  cout << "cc!=cd(they are equal.):\n" << (cc == cd) << endl;
  MatrixUInt ca(3, 3, 5);
  MatrixUInt cb(3, 3, 4);
  cout << "ca!=cb(they are NOT equal.):\n" << (ca != cb) << endl;
  cout << "ca>cb:\n" << (ca > cb) << endl;
  cout << "ca<cb:\n" << (ca < cb) << endl;
  cout << "c[1][1]: " << ca[1][1] << endl;
  return 0;
}
