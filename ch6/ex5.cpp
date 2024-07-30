#include <iostream>
#include <cstring>
using namespace std;

int main() {
	double tvarps;
	while (cout<<"Enter your income: "&& cin>>tvarps){
	    if(tvarps<0)
	    break;
		if(tvarps>=0&&tvarps<=5000)
			cout<<"The tax you owe: 0"<<endl;
		if(tvarps>5000&&tvarps<=15000)
			cout<<"The tax you owe: "<<(tvarps-5000)*0.10<<endl;
		if(tvarps>15000&&tvarps<=35000)
			cout<<"The tax you owe: "<<10000*0.10+(tvarps-15000)*0.15<<endl;
		if(tvarps>35000)
			cout<<"The tax you owe: "<<10000*0.10+20000*0.15+(tvarps-35000)*0.20<<endl;
	}
    return 0; 
}
