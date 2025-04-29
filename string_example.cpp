#include<iostream>
#include<cstring>
#include<string>
using namespace std;


//reverse a given string
string reverse(string str) {
	string temp = str;
	int index = 0;
	for (int i = temp.length()-1; i >= 0; i--) {
		str[index] = temp[i];
		index++;
	}
	return str;
}
int main() {
	cout << "reverse string " << reverse("melisa") << endl;
	















	return 0;
}