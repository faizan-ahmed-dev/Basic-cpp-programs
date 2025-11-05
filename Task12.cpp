#include <iostream>
#include <string>
 using namespace std;
 
  void calculatePayableAmount(string day, float amount) {
  	float payableAmount;  	
  	if (day == "sunday") {
  		payableAmount = amount - (amount * 0.10);
	  }
	  else {
	  	payableAmount = amount - (amount * 0.05);
	  }
	   cout << "Payable Amount: $" << payableAmount << endl;
  }
    int main() {
   	 string day;
   	 float amount;
   	 
   	  while(true) {
		  cout << "Enter the day of purchase: " ;
   	  cin >> day;
   	 cout << "Enter the total purchase amount: ";
   	  cin >> amount;
   	  
   	  calculatePayableAmount(day, amount); }
   }
