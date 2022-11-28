// try to install cppcheck and check this file to see the error.
#include <iostream>

void useAfterDelete(int *p) {
  delete p;
  int j = *p; //error... the pointer is deleted.
}

void do_uninitialized() {
  int j = 42;
  int uninitialized; // not initial value before use it below.
  if (uninitialized = uninitialized) { // error comparing itself. and == not = operation
    std::cout << "Hello" << std::endl;
  }
}

void calcAges() {
  int ages[3];
  ages[1] = 18;
  ages[2] = 21;
  ages[3] = 35; //error here because ages array has only 3 elements (0->2)

  int total(0);
  for(auto age: ages){
    total += age;
  }
  std::cout << "Total = " << total << std::endl;
}

int main() {
  useAfterDelete(new int(42));
  do_uninitialized();
  calcAges();
  return 0;
}