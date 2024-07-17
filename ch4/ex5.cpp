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
	CandyBar snack{
	"Mocha Munch",
	2.3,
	350
	};
	cout<<"Name of a candy bar is "<<snack.name<<"."<<endl;
	cout<<"Weight is of the candy bar is "<<snack.weight<<"."<<endl;
	cout<<"Calories of the candy bar is "<<snack.calories<<"."<<endl;
	return 0;
}
