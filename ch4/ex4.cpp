#include <iostream>
#include <cstring>
 
int main() {
	using namespace std;
	string firstName;
	string lastName;
	cout<<"Enter your first name: ";
	getline(cin,firstName);
	cout<<"Enter your last name: ";
	getline(cin,lastName);
	firstName = firstName+", "+lastName;
	cout<<"Here's the information in a single string: "<<firstName;
	return 0;
}
