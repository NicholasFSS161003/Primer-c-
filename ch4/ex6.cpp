#include <iostream>
#include <cstring>
#include <string>
using namespace std;
struct CandyBar{
	string name;
	double weight;
	int calories;
};

int main() {
	CandyBar snack[3] = {
		{"M&M",10,4},
		{"Snacky snack",5,8},
		{"Gummy Bear",6,4}
	} ;
	for(int i=0;i<3;i++){
	cout<<"Name of a candy bar " << i+1 << " is "<<snack[i].name<<"."<<endl;
	cout<<"Weight is of the candy bar " << i+1 << " is "<<snack[i].weight<<"."<<endl;
	cout<<"Calories of the candy bar " << i+1 << " is "<<snack[i].calories<<"."<<endl;
	}
	return 0;
}
