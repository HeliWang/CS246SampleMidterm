#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int foo (string s){
istringstream ss(s);
int i;
while ( true ){
if (!( ss >> i)){
if( ss.eof()) break ;
else { 
    ss.clear();
    ss.ignore();
}
}
else { cout << i << endl ; }
}
}

int main (){
    foo("1 2 3 x 4 5");
    }