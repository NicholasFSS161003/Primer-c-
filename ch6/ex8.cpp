#include <iostream>
#include <fstream>
using namespace std;

int main (){
	ofstream File;
	ifstream Read;
	int count = 0;
	char ch;
	
	File.open("File.txt");
	File<<"Just a few words."<<endl;
	File<<"I don't know did I get this right"<<endl;
	File.close();
	
	Read.open("File.txt");
	while(Read>>ch&&!Read.eof()){
		++count;
	}
	Read.close();
	
	cout<<"Amount of characters read: "<<count;
	return 0;
}
