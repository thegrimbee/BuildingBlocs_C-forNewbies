#include <bits/stdc++.h>
using namespace std;

// while solution
int main(){
  int counter = 1;
  int total = 0;
  while (counter <= 10){
    total += counter;
    counter ++;
  }
  cout << total << endl;
}

// for solution
int main(){
  int total = 0; 
  for (int counter = 0; counter <= 10; counter++){
    total += counter;
  }
  cout << total << endl;
}
