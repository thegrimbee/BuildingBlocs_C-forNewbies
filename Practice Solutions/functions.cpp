#include <bits/stdc++.h>
using namespace std;

int addition(int a, int b) {   //ensure you re-declare the variables as int a, int b and not just a, b
  return a + b;
}

int subtract(int a, int b) {
  return a - b;
}

int multiply(int a, int b) {
  return a * b;
}

int main() {
  //outputting
  cout << "The sum of 1 and 2 is " << addition(1,2) << endl;
  cout << "The difference between 5 and 2 is " << subtract(5,2) << endl;
  cout << "The product between 2 and 3 is " << multiply(2,3) << endl;
  
  //storing into variables
  int sum, diff, product;
  sum = addition(1,2); // expected value of sum: 3
  diff = subtract(5,2); // expected value of diff: 3
  product = multiply(2,3); // expected value of product: 6
  
  cout << sum + diff << endl; // expected output: sum + diff = 3 + 3 = 6
  cout << product - diff << endl; // expected output: product - diff = 6 - 3 = 3
  
}
