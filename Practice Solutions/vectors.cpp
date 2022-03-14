#include <bits/stdc++.h>
using namespace std;
vector<char> swap(vector<char> v, int index1, int index2){
    //swapping
    char temp = v[index1];
    v[index1] = v[index2];
    v[index2] = temp;
    return v; //return the vector
}

int main(){
    vector<char> vc = {'a', 'b', 'c', 'd', 'e'}; //example
    vc = swap(vc, 0, 3);
    for (int i = 0; i < vc.size(); i++){
        cout << vc[i] << ' ';
    }
    //output is d b c a e because element at index 0 (1st element) is swapped with element at index 3 (4th element)
}
