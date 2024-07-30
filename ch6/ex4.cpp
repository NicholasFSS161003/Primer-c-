#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

const int strsize=50;

struct bop {
char fullname[strsize]; 
char title[strsize]; 
char bopname[strsize]; 
int preference; 
};

int main() {
	char choice;
	
	bop bop[5] = {
	{"Wimp Macho","Simp Macho","BOOB",0},
	{"Raki Rhodes","Junior Programmer","Nigger",1},
	{"Celia Laiter","MIPS","Winnie the Pooh",0},
	{"Hoppy Hipman","Analyst Trainee","IDK",2},
	{"Pat Hand","LOOPY","Your name",1}	
	};
	
	cout<<"Benevolent Order of Programmers Report"<<endl;
	cout<<"a. display by name b. display by title"<<endl;
	cout<<"c. display by bopname d. display by preference"<<endl;
	cout<<"q. quit"<<endl;
	cout<<"Enter your choice: ";
	
	while(choice != 'E'){
		cin.get(choice);
		switch (choice){
			case 'a':
				for(int i=0;i<5;i++)
					cout<<bop[i].fullname<<endl;
				cout<<"Next choice: ";
				break;
			case 'b':
				for(int i=0;i<5;i++)
					cout<<bop[i].title<<endl;
				cout<<"Next choice: ";
				break;
			case 'c':
				for(int i=0;i<5;i++)
					cout<<bop[i].bopname<<endl;
				cout<<"Next choice: ";
				break;
			case 'd':
				for(int i=0;i<5;i++){
					if(bop[i].preference=0)
						cout<<bop[i].fullname<<endl;
					else if(bop[i].preference=1)
						cout<<bop[i].title<<endl;
					else if(bop[i].preference=2)
						cout<<bop[i].bopname<<endl;
					}
				cout<<"Next choice: ";
				break;
			case 'q': 
			cout<<"Bye!";
			choice = 'E';
			break;	
		}
	}	
	if(choice ='E')
		exit(EXIT_FAILURE);
    return 0; 
}
