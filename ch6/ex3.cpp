#include <iostream>
using namespace std;

int main() {
	bool status = 1;
	char choice;	
	cout<<"Please enter one of the following choices:"<<endl;
	cout<<"c) carnivore p) pianist"<<endl;
	cout<<"t) tree      g) game"<<endl;
	while (status == 1){
	cin.get(choice);
	cin.get();
	switch (choice){
		case 'c':
			cout<<"A maple is a carnivore.";
			status = 0;
			break;
		case 'p':
			cout<<"A maple is a pianist.";
			status = 0;
			break;
		case 't':
			cout<<"A maple is a tree.";
			status = 0;
			break;
		case 'g':
			cout<<"A maple is a game.";
			status = 0;
			break;
		default: cout<<"Not a choice, please rechoose:";
	}
	}
    return 0; 
}
