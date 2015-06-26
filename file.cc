#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
	ifstream file ("file.txt");
	string str [1000];
	int strnum = 0;
	int myint [1000];
	int intnum = 0;
	int total = 0;
	while (file) {
		if (! (file>> str[strnum])) {
			file>> myint[strnum];
			cout << myint[strnum] << endl;
			intnum++;
		} else {
			cout << str[strnum] << endl;
			strnum++;
		}
	}
	
	for (int i=0; i < intnum; i++){
		cout << myint[i] << endl;
		total += myint[i];
	}
	
	for (int i=0; i < strnum; i++){
		cout << str[i] << endl;
	}
	
	cout << total << endl;
}
