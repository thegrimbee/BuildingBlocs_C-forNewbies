#include <bits/stdc++.h>
using namespace std;

int main(){
  int scores[5] = {10, 20, 20, 10, 5}; 

  string names[5]; //array of size 5 with uninitialised values


  char letter[5] = {'a', 'b', 'c', 'd', 'e'}; // the value 'a' is at the 0th position, the value ‘d’ is at the 3rd position

  cout << letter[2]; // the output will be c
  cout << '\n';

  for (int i = 0; i < 5; i++){
	  cout << letter[i] << ' ';
  }
  cout << '\n';
  // outputs a b c d e


  int even[6];
  for (int i = 0; i < 6; i++){
    even[i] = i*2;
  }

  for(int i = 0; i < 6; i++){
    cout << even[i] << ' ';
  }
  //outputs 0 2 4 6 8 10


}
