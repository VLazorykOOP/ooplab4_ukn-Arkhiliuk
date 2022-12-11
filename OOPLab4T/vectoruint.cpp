#include "vectoruint.h"

typedef unsigned int ui;

ui VectorUInt::count = 0;

VectorUInt::VectorUInt() {
  arr = new ui[1];
  arr[0] = 0;
  codeError = 0;
  size = 1;
  count++;
}

VectorUInt::VectorUInt(ui elems) {
  arr = new ui[elems];
  size = elems;
  for (ui i = 0; i < elems; i++)
    arr[i] = 0;
  codeError = 0;
  count++;
}

VectorUInt::VectorUInt(ui elems, ui value) {
  arr = new ui[elems];
  size = elems;
  for (ui i = 0; i < elems; i++)
    arr[i] = value;
  codeError = 0;
  count++;
}

VectorUInt::VectorUInt(VectorUInt &inp) {
  arr = new ui[inp.size];
  size = inp.size;
  for (ui i = 0; i < size; i++) {
    arr[i] = inp.arr[i];
  }
  codeError = 0;
  count++;
}

VectorUInt::~VectorUInt() {
  delete[] arr;
  count--;
}

VectorUInt VectorUInt::operator++(int) {
  for (ui i = 0; i < size; i++) {
    arr[i] += 1;
  }
  return *this;
}

VectorUInt VectorUInt::operator--(int) {
  for (ui i = 0; i < size; i++) {
    arr[i] -= 1;
  }
  return *this;
}

bool VectorUInt::operator!() {
  if (size != 0)
    return true;
  else
    return false;
}

VectorUInt VectorUInt::operator~() {
  for (ui i = 0; i < size; i++) {
    arr[i] = ~arr[i];
  }
  return *this;
}

VectorUInt VectorUInt::operator-() {
  for (ui i = 0; i < size; i++) {
    arr[i] = 0 - arr[i];
  }
  return *this;
}

VectorUInt VectorUInt::operator=(VectorUInt &input) {
  VectorUInt result(input.size);
  for (ui i = 0; i < input.size; i++) {
    result.arr[i] = input.arr[i];
  }
  return result;
}

VectorUInt VectorUInt::operator+(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  VectorUInt result(elems);
  for (ui i = 0; i < elems; i++) {
    result.arr[i] = arr[i] + input.arr[i];
  }
  return result;
}

VectorUInt VectorUInt::operator+(unsigned int input) {
  VectorUInt result(size);
  for (ui i = 0; i < size; i++) {
    result.arr[i] = arr[i] + input;
  }
  return result;
}

VectorUInt VectorUInt::operator-(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  VectorUInt result(elems);
  for (ui i = 0; i < elems; i++) {
    result.arr[i] = arr[i] - input.arr[i];
  }
  return result;
}

VectorUInt VectorUInt::operator-(unsigned int input) {
  VectorUInt result(size);
  for (ui i = 0; i < size; i++) {
    result.arr[i] = arr[i] - input;
  }
  return result;
}

VectorUInt VectorUInt::operator*(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  VectorUInt result(elems);
  for (ui i = 0; i < elems; i++) {
    result.arr[i] = arr[i] * input.arr[i];
  }
  return result;
}

VectorUInt VectorUInt::operator*(unsigned int input) {
  VectorUInt result(size);
  for (ui i = 0; i < size; i++) {
    result.arr[i] = arr[i] * input;
  }
  return result;
}

VectorUInt VectorUInt::operator/(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  VectorUInt result(elems);
  for (ui i = 0; i < elems; i++) {
    result.arr[i] = arr[i] / input.arr[i];
  }
  return result;
}

VectorUInt VectorUInt::operator/(unsigned int input) {
  VectorUInt result(size);
  for (ui i = 0; i < size; i++) {
    result.arr[i] = arr[i] / input;
  }
  return result;
}

VectorUInt VectorUInt::operator%(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  VectorUInt result(elems);
  for (ui i = 0; i < elems; i++) {
    result.arr[i] = arr[i] % input.arr[i];
  }
  return result;
}

VectorUInt VectorUInt::operator%(unsigned int input) {
  VectorUInt result(size);
  for (ui i = 0; i < size; i++) {
    result.arr[i] = arr[i] % input;
  }
  return result;
}

VectorUInt VectorUInt::operator|(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  VectorUInt result(elems);
  for (ui i = 0; i < elems; i++) {
    result.arr[i] = arr[i] | input.arr[i];
  }
  return result;
}

VectorUInt VectorUInt::operator|(unsigned int input) {
  VectorUInt result(size);
  for (ui i = 0; i < size; i++) {
    result.arr[i] = arr[i] | input;
  }
  return result;
}

VectorUInt VectorUInt::operator^(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  VectorUInt result(elems);
  for (ui i = 0; i < elems; i++) {
    result.arr[i] = arr[i] ^ input.arr[i];
  }
  return result;
}

VectorUInt VectorUInt::operator^(unsigned int input) {
  VectorUInt result(size);
  for (ui i = 0; i < size; i++) {
    result.arr[i] = arr[i] ^ input;
  }
  return result;
}

VectorUInt VectorUInt::operator+=(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  for (ui i = 0; i < elems; i++) {
    arr[i] = arr[i] += input.arr[i];
  }
  return *this;
}

VectorUInt VectorUInt::operator+=(unsigned int input) {
  for (ui i = 0; i < size; i++) {
    arr[i] = arr[i] += input;
  }
  return *this;
}

VectorUInt VectorUInt::operator-=(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  for (ui i = 0; i < elems; i++) {
    arr[i] = arr[i] -= input.arr[i];
  }
  return *this;
}

VectorUInt VectorUInt::operator-=(unsigned int input) {
  for (ui i = 0; i < size; i++) {
    arr[i] = arr[i] -= input;
  }
  return *this;
}

VectorUInt VectorUInt::operator*=(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  for (ui i = 0; i < elems; i++) {
    arr[i] = arr[i] *= input.arr[i];
  }
  return *this;
}

VectorUInt VectorUInt::operator*=(unsigned int input) {
  for (ui i = 0; i < size; i++) {
    arr[i] = arr[i] *= input;
  }
  return *this;
}

VectorUInt VectorUInt::operator/=(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  for (ui i = 0; i < elems; i++) {
    arr[i] = arr[i] /= input.arr[i];
  }
  return *this;
}

VectorUInt VectorUInt::operator/=(unsigned int input) {
  for (ui i = 0; i < size; i++) {
    arr[i] = arr[i] /= input;
  }
  return *this;
}

VectorUInt VectorUInt::operator%=(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  for (ui i = 0; i < elems; i++) {
    arr[i] = arr[i] %= input.arr[i];
  }
  return *this;
}

VectorUInt VectorUInt::operator%=(unsigned int input) {
  for (ui i = 0; i < size; i++) {
    arr[i] = arr[i] %= input;
  }
  return *this;
}

VectorUInt VectorUInt::operator|=(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  for (ui i = 0; i < elems; i++) {
    arr[i] = arr[i] |= input.arr[i];
  }
  return *this;
}

VectorUInt VectorUInt::operator|=(unsigned int input) {
  for (ui i = 0; i < size; i++) {
    arr[i] = arr[i] |= input;
  }
  return *this;
}

VectorUInt VectorUInt::operator^=(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  for (ui i = 0; i < elems; i++) {
    arr[i] = arr[i] ^= input.arr[i];
  }
  return *this;
}

VectorUInt VectorUInt::operator^=(unsigned int input) {
  for (ui i = 0; i < size; i++) {
    arr[i] = arr[i] ^= input;
  }
  return *this;
}

std::ostream &operator<<(std::ostream &os, const VectorUInt &out) {
  for (ui i = 0; i < out.size; i++) {
    os << out.arr[i] << " ";
  }
  os << std::endl;
  return os;
}

std::istream &operator>>(std::istream &is, const VectorUInt &in) {
  for (ui i = 0; i < in.size; i++) {
    is >> in.arr[i];
  }
  return is;
}

bool VectorUInt::operator==(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  for (ui i = 0; i < elems; i++) {
    if (arr[i] != input.arr[i])
      return false;
  }
  return true;
}

bool VectorUInt::operator!=(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  for (ui i = 0; i < elems; i++) {
    if (arr[i] == input.arr[i])
      return false;
  }
  return true;
}

unsigned int &VectorUInt::operator[](const unsigned int index) {
  if (index > size) {
    return arr[size - 1];
    codeError = -1;
  }
  return arr[index];
}

void VectorUInt::operator()() {
  //???
}

bool VectorUInt::operator>(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  for (ui i = 0; i < elems; i++) {
    if (arr[i] <= input.arr[i])
      return false;
  }
  return true;
}

bool VectorUInt::operator>=(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  for (ui i = 0; i < elems; i++) {
    if (arr[i] < input.arr[i])
      return false;
  }
  return true;
}

bool VectorUInt::operator<(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  for (ui i = 0; i < elems; i++) {
    if (arr[i] >= input.arr[i])
      return false;
  }
  return true;
}

bool VectorUInt::operator<=(VectorUInt &input) {
  ui elems = size <= input.size ? size : input.size;
  for (ui i = 0; i < elems; i++) {
    if (arr[i] > input.arr[i])
      return false;
  }
  return true;
}

