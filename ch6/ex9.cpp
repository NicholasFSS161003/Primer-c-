#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

struct contributions {
	string name;
	double contribution;
};

int main() {
	
	ofstream File;
	File.open("ex9.txt");
	File<<"4"<<endl;
	File<<"Sam Stone"<<endl;
	File<<"2000"<<endl;
	File<<"Freida Flass"<<endl;
	File<<"100500"<<endl;
	File<<"Tammy Tubbs"<<endl;
	File<<"5000"<<endl;
	File<<"Rich Raptor"<<endl;
	File<<"55000"<<endl;
	File.close();
	
	int number;
	
	ifstream Read;
	Read.open("ex9.txt");	
	Read>>number;
	contributions * contributor = new contributions [number];
	
	for(int i=0;i<number;i++){
		Read.get();
		getline(Read,contributor[i].name);
		Read>>contributor[i].contribution;
	}
	
	
	cout<<"Grand Patrons: "<<endl;
	int count1=0;
	for(int i=0;i<number;i++){
	if(contributor[i].contribution>=10000){
        cout<<contributor[i].name<<" "<<contributor[i].contribution<<endl;
        count1++;
	}}
    if (count1==0)
		cout<<"None"<<endl;
	
	
	cout<<"Patrons:"<<endl;
	int count2=0;
	for(int i=0;i<number;i++){
	if(contributor[i].contribution<10000&&contributor[i].contribution>0){
        cout<<contributor[i].name<<" "<<contributor[i].contribution<<endl;
        count2++;
	}}
	if (count2==0)
		cout<<"None"<<endl;
	Read.close();
    return 0; 
}
