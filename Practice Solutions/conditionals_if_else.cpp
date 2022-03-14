// conditionals first practice 
int main(){
  int x; 
  cin >> x; 
  if (x % 2 == 0){
    cout << "Even";
  }
  else {
    cout << "Odd";
  }
}

// conditionals second practice
int main(){
    int score;
    cin >> score;
    if ((score >= 90) && (score <= 100)) {
        cout << "A*";
    } else if ((score >= 70) && (score <= 89)) {
        cout << "A";
    } else if ((score >= 60) && (score <= 69)) {
        cout << "B";
    } else if ((score >= 50) && (score <= 59)) {
        cout << "C";
    } else {
        cout << "F";
    }
}
