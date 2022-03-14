#include <bits/stdc++.h>
using namespace std;

int main(){
  //Arrays fixed size but faster and more memory efficient
  int scores1[5] = {80, 70, 90, 100, 60};
  scores1[1] = 75;
  for (int i = 0; i < 5; i++){
     cout << scores1[i] << ' ';
  }
  cout << '\n';
  
  //Vectors easy to understand, convenient to use, variable sizes
  vector<int> scores2 = {80, 70, 90, 100, 60};
  scores2.push_back(50);
  scores2.insert(scores2.begin()+1, 20);
  scores2.erase(scores2.begin() + 2);
  for (int i = 0; i < scores2.size(); i++){
      cout << scores2[i] << ' ';
  }
  cout << '\n';
  
  //Maps can add in names and tie it to the scores as well
  map<string, int> scores3;
  scores3["Joe"] = 90;
  scores3["Ron"] = 100;
  scores3["Ike"] = 15;
  scores3["Ike"] = 10;
  scores3.erase("Ike");
  cout << scores3.size();
}
