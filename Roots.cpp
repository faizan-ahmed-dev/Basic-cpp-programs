#include<iostream>
#include<cmath>
using namespace std;
 void roots(int a,int b,int c) {
 	double determinant,root1,root2,img1,img2;
 	determinant = (b*b)- (4*a*c);
 	if(determinant==0){
 		root1 = (-b/(2*a));
 		cout << "root = " << root1;
 	}
 	
 	else if(determinant>0) {
 		root1 = (((-b)+ sqrt(determinant))/(2*a));
 		root2 = (((-b)- sqrt(determinant))/(2*a));
 		cout << "root1 = " << root1 << " and root2 = " << root2;
		 }
		 
    else {
    	root1 = ((-b)/(2*a)); 
    	img1 = (sqrt(-(determinant))/(2*a));
    	root2 = ((-b)/(2*a)); 
    	img2 = (sqrt(-(determinant))/(2*a));
    	
    	cout << "root1 = " << root1 << " +i " << img1;
    	cout << "root2 = " << root2 << " +i " << img2;
	}
	
 }
 
 int main() {
 	int a, b, c;
 	double determinant, root1, root2, img1, img2;
 	cout << "Enter the value of a: ";
 	cin >> a;
 	cout << "Enter the value of b: ";
 	cin >> b;
 	cout << "Enter the value of c: ";
 	cin >> c;
   roots(a, b, c );	
 }
 
 
 
