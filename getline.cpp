#include <iostream>
using namespace std;

int main() {
char line[100];
cout<<"Type Line terminated by 't' \n>";
cin.getline( line, 100, 't' );
cout << line;
}
