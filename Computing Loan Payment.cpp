#include<iostream>	//Program Compilation
#include<cmath>	//Include cmath library
using namespace std;

int main()
{
	//Enter yearly interest
	cout << "Enter your yearly interest, for example 8.25: ";	
	double annualInterestRate;
	cin >> annualInterestRate;
	
	//Obtain monthly interest rate
	double monthlyInterestRate = annualInterestRate / 100;	//Enter interest rate
	
	//Enter number of years
	cout << "Enter number of years as an integer, for example 5: ";
	int numberOfYears;
	cin >> numberOfYears;
	
	//Enter loan amount
	cout << "Enter loan amount for example 12000.95: ";
	double loanAmount;
	cin >> loanAmount;
	
	//Calculate payment
	double monthlyPayment = loanAmount * monthlyInterestRate / (1 - 1 / pow( 1 + monthlyInterestRate , numberOfYears * 12));	//monthly payment
	
	double totalPayment = monthlyPayment * numberOfYears * 12;	//Double payment
	
	//Display results
	cout << "The monthly payment is " << monthlyPayment << "\n The total payment is " << totalPayment << endl;
	
	return 0;
}
