// ********************************************************
// Programmer�s name: Luis Jimenez 
// Course Number:  CIS142
// Date:  October 13 2022
// Assignment:  Lab 4
// Description:  Service Selction
// Files: SwitchProgm.cpp
// ********************************************************

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{	//Declared variables
	char Type_Service;
	//Reserved for premium service
	int prmnday{};
	//Reserved for premium service
	int prmnight{};
	//Specifically used to store the minutes on the 'Regular' service
	int ttlminutes{};{};
	//Used to store the number of the person's account
	int Usr_Account = 0;
	//Type float so that it holds decimals
	float ttlcharge = 0.00;
	//Asks for user input and stores it in Usr_Account variable
	cout << "**" << '*'
	cin >> Usr_Account;
	cout << endl;
	//Asks user the type of service they want 
	cout << "Enter service type (R or r) for regular, (P or p) for premium serivce: ";
	cin >> Type_Service;
	//Switch statement
	switch (Type_Service)
	{ 
	case 'R':
	case 'r':
		cout << endl;
		//Asks for total minutes and stores it in ttlminutes which is later on used for calculations
		cout << "Enter number of minutes service used: ";
		
		cin >> ttlminutes;

		cout << endl;
		//If statement 
		if (ttlminutes <= 50) {
			ttlcharge = 10;

		}
		//Calculation to find the total cost/charge
		else {
			ttlcharge = ((ttlminutes - 50) * 0.2) + 10;
		}
		//Reciept that prints what the user entered before, and how much they need to pay
		cout << "Account Number: " << Usr_Account << endl;
		cout << "Service Type: " << "Regular" << endl;
		cout << "Minutes Service Used: " << ttlminutes << endl;
		cout << "Amount Due: $" << fixed << setprecision(2) << ttlcharge << endl;
		break;

	case 'P':
	case 'p':
		cout << endl;
		//Asks for day time minutes
		cout << "Enter day time minutes used: ";
		//Stores it in prmnday
		cin >> prmnday;

		cout << endl;
		//Asks for night time minutes
		cout << "Enter night time minutes used: ";
		//Stores it in prmnight
		cin >> prmnight;

		cout << endl;
		//The '=' sign was not the problem! It still works and prints out the correct numbers.
		if (prmnday >= 75) {
			ttlcharge = ttlcharge + (prmnday - 75) * 0.10;

		}
		if (prmnight >= 100) {
			ttlcharge = ttlcharge + (prmnight - 100) * 0.05;
		}

		//Adds the $25 fee
		ttlcharge = ttlcharge + 25;

		//Reciept that prints everything the user entered, service, minutes for day/night, user account
		//Prints price with decimal points to not charge extra.
	default:
		cout << "Account Number: " << Usr_Account << endl;
		cout << "Service Type: " << "Premium" << endl;
		cout << "Minutes Service Used (Day): " << prmnday << endl;
		cout << "Minutes Service USed (Night): " << prmnight << endl;
		cout << "Amount Due: $" << fixed << setprecision(2) << ttlcharge << endl;

	}
	cout << "Thank You - Have A Good Day!";
	//Program ends 
	return 0;
}