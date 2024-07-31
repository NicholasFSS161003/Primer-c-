#include <iostream>
#include <cstring>
using namespace std;

struct contributions {
	string name;
	double contribution;
};

int main() {
	int number;
	cout<<"Enter the number of contributors: ";
	cin>>number;
	contributions * contributor = new contributions [number];
	
	for(int i=0;i<number;i++){
		cin.get();
		cout<<"Enter the name of the contributor:";
		getline(cin,contributor[i].name);
		cout<<"Enter the contribution of the contributor:";
		cin>>contributor[i].contribution;
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
    return 0; 
}
