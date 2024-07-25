#include <iostream>
#include <string>
using namespace std;

int main() {
    int time;
    cout<<"Enter number of rows:";
    cin>>time;
    for(int i=1;i<=time;i++){
    cout<<string(time-i,'.');
    cout<<string(i,'*')<<endl;
    }
    return 0;
}
