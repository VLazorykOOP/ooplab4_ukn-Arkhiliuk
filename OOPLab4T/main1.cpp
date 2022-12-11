#include "vectoruint.h"
#include <iostream>

using namespace std;

int main() {
  VectorUInt A(5, 2);
  VectorUInt B(3);
  VectorUInt C;
  cout << "A: " << A << endl;
  cout << "B: " << B << endl;
  cout << "C: " << C << endl;
  cout << "Objects: " << A.count << endl;
  VectorUInt D(A);
  cout << "D: " << D << endl;
  cout << "Objects: " << A.count << endl;
  D++;
  cout << "D: " << D << endl;
  D--;
  cout << "D: " << D << endl;
  cout << "!C: " << !C << endl;
  cout << "~A: " << ~A << endl;
  cout << "~A: " << ~A << endl;
  cout << "A: " << A << endl;
  cout << "-A: " << -A << endl;
  cout << "-A: " << -A << endl;
  cout << "A+D: " << A + D << endl;
  cout << "A-D: " << A - D << endl;
  cout << "A+1: " << A + 1 << endl;
  cout << "A-1: " << A - 1 << endl;
  cout << "A*D: " << A * D << endl;
  cout << "A*2: " << A * 2 << endl;
  cout << "A/D: " << A / D << endl;
  cout << "A/2: " << A / 2 << endl;
  cout << "A%2: " << A % 2 << endl;
  cout << "A|D: " << (A | D) << endl;
  cout << "A|3: " << (A | 3) << endl;
  cout << "A^D: " << (A ^ D) << endl;
  cout << "A^3: " << (A ^ 3) << endl;
  A += D;
  cout << "A+=D: " << A << endl;
  A -= D;
  cout << "A-=D: " << A << endl;
  A += 3;
  cout << "A+=3: " << A << endl;
  A -= 3;
  cout << "A-=3: " << A << endl;
  A *= D;
  cout << "A*=D: " << A << endl;
  A /= D;
  cout << "A/=D: " << A << endl;
  A *= 3;
  cout << "A*=3: " << A << endl;
  A /= 3;
  cout << "A/=3: " << A << endl;
  VectorUInt L(A);
  cout << "L: " << L << endl;
  L %= 2;
  cout << "L%=2: " << L << endl;
  L |= 20;
  cout << "L|=20: " << L << endl;
  L ^= 10;
  cout << "L^10: " << L << endl;
  VectorUInt copyA(A);
  cout << "Objects: " << A.count << endl;
  cout << "A==copyA: " << (A == copyA) << endl;
  cout << "A!=copyA: " << (A != copyA) << endl;
  cout << "A[2]: " << A[2] << endl;
  VectorUInt Z(3, 4);
  VectorUInt X(3, 5);
  cout << "Z: " << Z << endl;
  cout << "X: " << X << endl;
  cout << "Z > X: " << (Z > X) << endl;
  cout << "Z < X: " << (Z < X) << endl;
  cout << "Z >= X: " << (Z >= X) << endl;
  cout << "Z <= X: " << (Z <= X) << endl;
  return 0;
}

