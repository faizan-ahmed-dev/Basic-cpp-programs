#include<iostream>
 using namespace std;
  float add(float a, float b, float c) {
  	  return a+b+c;
  }
  
  float subtract(float a,float b, float c){
  	 return a-b-c;
  	 }
  	 
  	 float multiply(float a,float b, float c){
  	 	return a*b*c;
	   }
	    
	    float divide(float a,float b, float c){
	    	
	    	return a/b/c;
		}
		
int main() {
	float num1,num2,num3;
	char op;
	
	cout << "Enter first number: " ;
	cin >> num1;
	
	cout << "Enter second number: ";
	cin>> num2;
	
	cout << "Enter third number: ";
	cin>> num3;
	
	cout << "Enter Operator(+, -, *, /): " ;
	cin >> op;

	
	float result;
	switch(op) {
		case '+' :
	 result = add(num1,num2,num3);
	 break;
	 	case '-' :
	 result = subtract(num1,num2,num3);
	 break;
	    case '*' :
	 result = multiply(num1,num2,num3);
	 break;
	 	case '/' :
	 result = divide(num1,num2,num3);
	 break;
	  default:
	  	cout << "Invalid Operator!" << endl;
	  }
	  
	  cout << "Result: " << result << endl;
	  
	  float average = (num1 + num2 + num3)/3;
	  cout << "Average of the three numbers is " << average << endl;
	  return 0;
	 }
