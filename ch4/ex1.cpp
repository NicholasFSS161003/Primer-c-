#include <iostream>
#include <string>
using namespace std;
int main () {
	string first_name,last_name;
	char entered_grade;
	int age;
	cout<<"What is your first name? ";
	getline(cin,first_name);
	cout<<"What is your last name? ";
	getline(cin,last_name);
	cout<<"What letter grade do you deserve? ";
	cin>>entered_grade;
	cout<<"What is your age? ";
	cin>>age;
	cout<<"Name: "<<first_name<<", "<<last_name<<endl;
	int convert = entered_grade + 1;
	char result_grade = convert;
	cout<<"Grade: "<<result_grade<<endl;
	cout<<"Age: "<<age;
	return 0;
}
