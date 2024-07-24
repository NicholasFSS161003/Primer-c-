#include<iostream>
using namespace std;
int main (){
    int number;
    int sum = 0;
        cout<<"Type in a number: ";
        cin>>number;
    while(number != 0) {
        sum = sum + number;
        cout<<"The sum up to date: "<<sum<<endl;
        cout<<"Type in a number: ";
        cin>>number;
    }
    return 0;
}
