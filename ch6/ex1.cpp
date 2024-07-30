#include <iostream>
#include <cctype>
int main(){
using namespace std;
    char input[50];
    cout<<"Enter something: ";
    int i=0;
    while (cin.get(input,50) && int(input[i]) != 64){
        if(isupper(input[i]))
            input[i]=tolower(input[i]);
        cout<<input;
        i++;
    }
    cout<<endl;
    cout<<"Program ended!";
return 0;
}
