#include<cstring>
#include <iostream>
using namespace std;

int main() {
    string word;
    int count=0;
    cout<<"Enter words (to stop, type the word done):"<<endl;
    for(int i=0;word != "done";i++){
        cin >> word;
        count++;
    }
    cout<<"You entered a total of "<<count-1<<" words";
    return 0;
}
