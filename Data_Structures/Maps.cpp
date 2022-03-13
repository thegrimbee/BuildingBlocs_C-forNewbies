#include<bits/stdc++.h>
using namespace std;
int main(){
	map <string, char> grades;

	grades["English"] = 'D';
	grades["Math"] = 'A';
	grades["Computing"] = 'A';

	cout << grades["English"] << '\n';
	//outputs D

	map<string, int> m;
	m["Joe"] = 25;
	m["Ron"] = 4;
	cout << m.size() << '\n';
	//outputs 2;
	m.erase("Ron");
	cout << m.size() << '\n';
	//outputs 1;

}
