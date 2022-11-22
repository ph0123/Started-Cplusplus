#include <iostream>
using namespace std;

auto continouosAdd = [](auto a, auto b){
  auto total = a;
  return [total,b]() mutable{
    total = total+b;
    return total;
  };
};

int main() {
  
  auto x = continouosAdd(1000, 10);
  cout << x() << endl;
  cout << x() << endl;
  cout << x() << endl;
  cout << x() << endl;
  cout << x() << endl;

  return 0;
}