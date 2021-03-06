#include "stdafx.h"
#include "certificateOfDeposit.h"
#include "highInterestChecking.h"
#include "highInterestSavings.h"
#include "serviceChargeChecking.h"
using namespace std;


void TestCheckingWithService()
{
	serviceChargeChecking acct(1995, "Christian Brannon", 1000);
	char input = 0;
	double amount;

	cout << "\t\tTesting Checking with Service Charge" << endl << endl;
	cout << "Current account overview:" << endl;

	acct.printSummary();
	cout << endl;
	while (input != 'x')
	{
		cout << "Select a transaction:" << endl;
		cout << "1 - Make a Withdrawal" << endl;
		cout << "2 - Make a Deposit" << endl;
		cout << "3 - Print Summary" << endl;
		cout << "4 - Print Monthly Statement" << endl;
		cout << "5 - Write a check" << endl;
		cout << "x - Exit Test Suite" << endl;
		cout << "Enter choice: ";
		cin >> input;
		switch (input)
		{
		case '1':
			cout << "Enter amount: ";
			cin >> amount;
			acct.withdraw(amount);
			break;
		case '2':
			cout << "Enter amount: ";
			cin >> amount;
			acct.deposit(amount);
			break;
		case '3':
			acct.printSummary();
			break;
		case '4':
			acct.printStatement();
			break;
		case '5':
			cout << "Enter amount: ";
			cin >> amount;
			acct.writeCheck(amount);
			break;
		case '6':
			break;
		case 'x':
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
		acct.printSummary();
		cout << endl;
	}
}

void TestCheckingNoService()
{
	noServiceChargeChecking acct(1995, "Christian Brannon", 1000);
	char input = 0;
	double amount;
	cout << "\t\tTesting Checking without Service Charge" << endl << endl;
	cout << "Current account overview:" << endl;
	acct.printSummary();
	cout << endl;
	while (input != 'x')
	{
		cout << "Select a transaction:" << endl;
		cout << "1 - Make a Withdrawal" << endl;
		cout << "2 - Make a Deposit" << endl;
		cout << "3 - Print Summary" << endl;
		cout << "4 - Print Monthly Statement" << endl;
		cout << "5 - Write a check" << endl;
		cout << "x - Exit Test Suite" << endl;
		cout << "Enter choice: ";
		cin >> input;
		switch (input)
		{
		case '1':
			cout << "Enter amount: ";
			cin >> amount;
			acct.withdraw(amount);
			break;
		case '2':
			cout << "Enter amount: ";
			cin >> amount;
			acct.deposit(amount);
			break;
		case '3':
			acct.printSummary();
			break;
		case '4':
			acct.printStatement();
			break;
		case '5':
			cout << "Enter amount: ";
			cin >> amount;
			acct.writeCheck(amount);
			break;
		case '6':
			break;
		case 'x':
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
		acct.printSummary();
		cout << endl;
	}
}

void TestCheckingHighInterest()
{
	highInterestChecking acct(1995, "Christian Brannon", 1000);
	char input = 0;
	double amount;
	cout << "\t\tTesting Checking with High Interest" << endl << endl;
	cout << "Current account overview:" << endl;
	acct.printSummary();
	cout << endl;
	while (input != 'x')
	{
		cout << "Select a transaction:" << endl;
		cout << "1 - Make a Withdrawal" << endl;
		cout << "2 - Make a Deposit" << endl;
		cout << "3 - Print Summary" << endl;
		cout << "4 - Print Monthly Statement" << endl;
		cout << "5 - Write a check" << endl;
		cout << "x - Exit Test Suite" << endl;
		cout << "Enter choice: ";
		cin >> input;
		switch (input)
		{
		case '1':
			cout << "Enter amount: ";
			cin >> amount;
			acct.withdraw(amount);
			break;
		case '2':
			cout << "Enter amount: ";
			cin >> amount;
			acct.deposit(amount);
			break;
		case '3':
			acct.printSummary();
			break;
		case '4':
			acct.printStatement();
			break;
		case '5':
			cout << "Enter amount: ";
			cin >> amount;
			acct.writeCheck(amount);
			break;
		case '6':
			break;
		case 'x':
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
		acct.printSummary();
		cout << endl;
	}
}

void TestSavings()
{
	savingsAccount acct(1995, "Christian Brannon", 1000);
	char input = 0;
	double amount;
	cout << "\t\tTesting Regular Savings" << endl << endl;
	cout << "Current account overview:" << endl;
	acct.printSummary();
	cout << endl;
	while (input != 'x')
	{
		cout << "Select a transaction:" << endl;
		cout << "1 - Make a Withdrawal" << endl;
		cout << "2 - Make a Deposit" << endl;
		cout << "3 - Print Summary" << endl;
		cout << "4 - Print Monthly Statement" << endl;
		cout << "x - Exit Test Suite" << endl;
		cout << "Enter choice: ";
		cin >> input;
		switch (input)
		{
		case '1':
			cout << "Enter amount: ";
			cin >> amount;
			acct.withdraw(amount);
			break;
		case '2':
			cout << "Enter amount: ";
			cin >> amount;
			acct.deposit(amount);
			break;
		case '3':
			acct.printSummary();
			break;
		case '4':
			acct.printStatement();
			break;
		case 'x':
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
		acct.printSummary();
		cout << endl;
	}
}

void TestSavingsHighInterest()
{
	highInterestSavings acct(1995, "Christian Brannon", 8000);
	char input = 0;
	double amount;
	cout << "\t\tTesting High Interest Savings" << endl << endl;
	cout << "Current account overview:" << endl;
	acct.printSummary();
	cout << endl;
	while (input != 'x')
	{
		cout << "Select a transaction:" << endl;
		cout << "1 - Make a Withdrawal" << endl;
		cout << "2 - Make a Deposit" << endl;
		cout << "3 - Print Summary" << endl;
		cout << "4 - Print Monthly Statement" << endl;
		cout << "x - Exit Test Suite" << endl;
		cout << "Enter choice: ";
		cin >> input;
		switch (input)
		{
		case '1':
			cout << "Enter amount: ";
			cin >> amount;
			acct.withdraw(amount);
			break;
		case '2':
			cout << "Enter amount: ";
			cin >> amount;
			acct.deposit(amount);
			break;
		case '3':
			acct.printSummary();
			break;
		case '4':
			acct.printStatement();
			break;
		case 'x':
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
		acct.printSummary();
		cout << endl;
	}
}

void TestCertificateOfDeposit()
{
	certificateOfDeposit acct(1995, "Christian Brannon", 200000, 6);
	char input = 0;
	double amount;
	cout << "\t\tTesting High Interest Savings" << endl << endl;
	cout << "Current account overview:" << endl;
	acct.printSummary();
	cout << endl;
	while (input != 'x')
	{
		cout << "Select a transaction:" << endl;
		cout << "1 - Make a Withdrawal" << endl;
		cout << "2 - Make a Deposit" << endl;
		cout << "3 - Print Summary" << endl;
		cout << "4 - Print Monthly Statement" << endl;
		cout << "x - Exit Test Suite" << endl;
		cout << "Enter choice: ";
		cin >> input;
		switch (input)
		{
		case '1':
			cout << "Enter amount: ";
			cin >> amount;
			acct.withdraw(amount);
			break;
		case '2':
			cout << "Enter amount: ";
			cin >> amount;
			acct.deposit(amount);
			break;
		case '3':
			acct.printSummary();
			break;
		case '4':
			acct.printStatement();
			break;
		case 'x':
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
		acct.printSummary();
		cout << endl;
	}
}
int main()
{
	char input;
	cout << "\t\tWelcome to the Bank Account Test Suite" << endl << endl;
	cout << "What type of account do you want to test?" << endl;
	cout << "1 - Checking with Service Charge" << endl;
	cout << "2 - Checking without Service Charge" << endl;
	cout << "3 - Checking with High Interest" << endl;
	cout << "4 - Savings" << endl;
	cout << "5 - Savings with High Interest" << endl;
	cout << "6 - Certificate of Deposit" << endl;
	cout << "Enter choice: ";
	cin >> input;
	switch (input)
	{
	case '1':
		TestCheckingWithService();
		break;
	case '2':
		TestCheckingNoService();
		break;
	case '3':
		TestCheckingHighInterest();
		break;
	case '4':
		TestSavings();
		break;
	case '5':
		TestSavingsHighInterest();
		break;
	case '6':
		TestCertificateOfDeposit();
		break;
	default:
		cout << "Invalid choice" << endl;
		break;
	}
}