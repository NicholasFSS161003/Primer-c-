#include <iostream>
#include <cstring>
 
int main() {
	using namespace std;
	char firstName[50];
	char lastName[50];
	cout<<"Enter your first name: ";
	cin.getline(firstName,50);
	cout<<"Enter your last name: ";
	cin.getline(lastName,50);
	strcat(firstName,", ");
	strcat(firstName,lastName);
	cout<<"Here's the information in a single string: "<<firstName;
	return 0;
}
