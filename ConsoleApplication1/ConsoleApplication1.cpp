#include <iostream>
using namespace std;

int main()
			/* creat a program to ask the user to enter a number, Then Print "Odd" if its odd or "Even" if its even */
{
	int num;
	cout << " please enter a number " << endl;

	cin >> num;
	int result = num % 2;

	if (result == 0) {

		cout << "even" << endl;

	}

	else {

		cout << "odd" << endl;
	}


	return 0;

	// created by @ilyes_trabelsi
}

