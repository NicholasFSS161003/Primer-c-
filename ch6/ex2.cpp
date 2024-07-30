#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    double donation[10];
    double avg=0;
    int count=0;
    for(int i=0;i<10;i++){
        cout<<"Enter a donation value: ";
    if (cin>>donation[i]){
    	avg+=donation[i];
		} else {
			exit(EXIT_FAILURE);
		}
    }
    avg = avg/10;
    cout<<"Average of the numbers: "<<avg<<endl;
    for (int i=0;i<10;i++){
    	if(donation[i]>avg)
			count++;
	}
    cout<<"Numbers in the array are larger than the average: "<<count;
    return 0; 
}
