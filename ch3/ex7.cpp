#include<iostream>

int main(){
	using namespace std;
	double L;
	cout<<"Enter an automobile gasoline consumption(L per 100km) \n L: ";
	cin>>L;
	cout<<L<<"L/100km"<<endl;
	double Miles=62.14;
	double Galloon=L/3.875;
	int final=Miles/Galloon;
	cout<<"mpg: "<< final;
	return 0;
 }
