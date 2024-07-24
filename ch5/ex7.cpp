#include <iostream>
#include <cstring>
using namespace std;

struct car {
	string make;
	int year;
};

int main (){
	int number;
	cout<<"How many cars do you wish to catalog? ";
	cin>>number;
		car * cars = new car [number];
	
	for(int i=0; i<number;i++){
		cout<<"Car #"<<i+1<<endl;
		cout<<"Please enter the make: ";
		cin.get();
		getline(cin,cars[i].make);
		cout<<"Please enter the year made: ";
		cin>>cars[i].year;
	}
	cout<<"Here is your collection: "<<endl;
	for(int t=0;t<number;t++){	
	cout<<cars[t].year<<" "<<cars[t].make<<endl;
    }
    return 0;
}
