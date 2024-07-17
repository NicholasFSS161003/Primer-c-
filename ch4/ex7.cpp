#include <iostream>
#include <cstring>
using namespace std;

struct Pizza {
	string name;
	double diameter;
	double weight;
};

int main(){
    Pizza company{};
	cout<<"The name of the pizza company: ";
	getline(cin,company.name);
	cout<<"The diameter of the pizza: ";
	cin>>company.diameter;
	cout<<"The weight of the pizza: ";
	cin>>company.weight;
	cout<<"The name of the pizza company: "<<company.name<<endl;
	cout<<"The diameter of the pizza: "<<company.diameter<<endl;
	cout<<"The weight of the pizza: "<<company.weight<<endl;
	return 0;
}
