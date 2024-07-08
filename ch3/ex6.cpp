#include<iostream>

int main(){
	using namespace std;
	cout<<"Km you have driven: ";
	double km;
	cin>>km;
	cout<<"Petrol in liters: ";
	double L;
	cin>>L;
	double e=100/km;
	cout<<L*e<<" per 100 kilometers.";
	return 0;
 }
