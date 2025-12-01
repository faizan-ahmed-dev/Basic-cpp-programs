#include <iostream>
using namespace std;

void swap(int &a, int &b);

int main() {
	int a=5;
	int b=10;
	
	cout<< "The value of a before swapping is : " << a << endl;
	cout<< "The value of b before swapping is : " << b << endl;
	swap(a,b);
	cout<< "The value of a after swapping is : " << a << endl;
	cout<< "The value of b after swapping is : " << b << endl;
	return 0;
}
void swap(int &a, int &b) {
	int c;
	c = a;
	a = b;
	b = c;
}
