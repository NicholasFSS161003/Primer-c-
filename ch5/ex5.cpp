#include <iostream>
#include <cstring>
using namespace std;

int main (){
    int sales[12];
    string months [12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November",  "December"};
    int sum = 0;
    for(int e=0;e<12;e++){
        cout<<"Enter the monthly sales for ";
        cout<<months[e];
        cout<<": ";
        cin>>sales[e];
        sum += sales[e];
    }
    cout<<"The total sum of monthly sales: "<<sum;
    return 0;
}
