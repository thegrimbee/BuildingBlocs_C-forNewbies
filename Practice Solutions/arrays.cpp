#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x; //input n and x
  
    int numbers[n];
    //inputting the values into the array
    for (int i = 0; i < n; i++){
        cin >> numbers[i];
    }
  
    int ans = 0; //variable that stores the answer
  
    //iterating through array to count how many elements less than x
    for (int i = 0; i < n; i++){
        if (numbers[i] < x){
            ans++;
        }
    }
    cout << ans;
}
