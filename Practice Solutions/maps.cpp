#include<bits/stdc++.h>
using namespace std;
bool same_class(map<string, string> m, string student1, string student2){
    return m[student1] == m[student2];
}
int main(){
    map<string, string> classes;
    classes["John"] = "2SA5";
    classes["Ron"] = "2AA1";
    classes["Hank"] = "2SA5";
    cout << same_class(classes, "John", "Hank") << '\n'; //outputs 1 which represents true
    cout << same_class(classes, "John", "Ron") //outputs 0 which represents false

}
