#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

string input;

int main() {
    int vowels=0,consonants=0,other=0;
    cout<<"Enter words (q to quit):";
	
	while(cin>>input){
		if(input[0] == 'q')
			break;
		if(isalpha(input[0])){
		    switch(tolower(input[0])){
		        case 'a':
		             ++vowels;
		             continue;
		        case 'e':
		            ++vowels;
		            continue;
		        case 'i':
		            ++vowels;
		            continue;
		        case 'o':
		            ++vowels;
		            continue;
		        case 'u':
		            ++vowels;
		            continue;
		        case '\n':
		            continue;
		        default:
		            ++ consonants;
		            continue;
		    }
	} else {
	   ++ other;
	}
	}
	
    cout<<vowels<<" words beginning with vowels"<<endl;
    cout<<consonants<<" words beginning with consonants"<<endl;
    cout<<other<<" others";
    return 0;
}
