#include<iostream>
using namespace std;

void getInput (double &  fVariable)
{ using namespace std;
cout << "I will convert a Fahrenheit temperature"
<< " to Celsius.\n"
<< "Enter a temperature in Fahrenheit: ";
cin >> fVariable;
}

int main(){
	double t;
	getInput(t);
	cout << "t: " << t << endl;
	return 0;
}
