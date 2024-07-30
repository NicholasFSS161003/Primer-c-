#include <iostream>
#include <cctype>
#include <cstring>

int main(){
using namespace std;
    char input[50];
    cout<<"Enter something: ";
    int i=0;
    while (cin.get(input,50) && int(input[i]) != 64){
        for(int e=0;e<strlen(input);e++){
            if(isupper(input[e]))
             input[e]=tolower(input[e]);
        }
        cout<<input;
        i++;
    }
    cout<<endl;
    cout<<"Program ended!";
return 0;
}
