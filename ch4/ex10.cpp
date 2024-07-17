#include <iostream>

int main() {
	using namespace std;
	double record[3];
	cout<<"enter three times for the 40-yd dash: "<<endl;
	cout<<"First time: ";
	cin>>record[0];
	cout<<"Second time: ";
	cin>>record[1];
	cout<<"Third time: ";
	cin>>record[2];
	cout<<"Average time: "<<(record[0]+record[1]+record[2])/3;
	return 0;
}
