#include <iostream>
#include <cstring>
using namespace std;

int main (){
    int sales[12];
    char months [12] [10]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November",  "December"};
    int sum[] = {0,0,0};
    for (int y =0;y<3;y++){
    for(int e=0;e<12;e++){
        cout<<"Enter the monthly sales for ";
        for(int i=0;i<10;i++){
           cout<<months[e][i];
        }
        cout<<"for year "<<y+1<<" : ";
        cin>>sales[e];
        sum[y] += sales[e];
    }
    cout<<"The total sum of monthly sales for year "<<y+1<<" : "<<sum[y]<<endl;
}
    return 0;
}
