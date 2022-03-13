#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> three_fives(3, 5);
	//{5,5,5}
	vector<int> numbers = {10, 20, 20, 10, 5};
	numbers.push_back(60);
	//numbers becomes {10,20,20,10,5,60}
	numbers.insert(numbers.begin()+3,15);
	//numbers becomes {10,20,20,15,10,5,60}
	numbers.erase(numbers.begin()+4);
	//numbers becomes {10,20,20,15,5,60}

	vector<double> numbers2={1.5,2.3,4.0};

	cout << numbers2[2] <<'\n';
	//outputs 4

	for (int i = 0;i<numbers2.size();i++){
		cout << numbers2[i] << ' ';
	} 
	cout << '\n';
	//outputs 1.5 2.3 4 

	string s = "abc";
	s += "de";
	cout << s[3];
	//outputs d

}
