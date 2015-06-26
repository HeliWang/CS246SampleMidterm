#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
	ifstream file ("names.txt");
	string line;
	while (file) {
		getline(file, line);
		istringstream lineStream (line);
		string par1, par2, par3, par4;
		lineStream >> par1;
		lineStream >> par2;
		lineStream >> par3;
		if (! (lineStream>> par4)) {
			par4=par3;
			par3=par2;
			par2="";
		}
		par1=par1.substr(0,1);
		par2=par2.substr(0,1);
		string temp;
		temp = par1+par2;
		temp+=par3.substr(0, (8 - temp.length()));
		temp = temp + " " + par4;
		cout << temp << endl;
	}
}