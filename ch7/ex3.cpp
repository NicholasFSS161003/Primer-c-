#include <iostream>
using namespace std;

struct box
{
char maker[40];
float height;
float width;
float length;
float volume;
};

box display(char maker[40],float height,float width,float length,float volume);
void address(box * structure);

int main() {
//c
	char word[40] = "Cool";
	box val = display(word,1.75,0.4,1.76,2.6);
	address(&val);
    return 0;
}

//a
box display(char maker[40],float height,float width,float length,float volume){
	box output;
	for(int i = 0; maker[i] != '\0';i++){
	output.maker[i]= maker[i];
	cout << output.maker[i];
	}
	output.height = height;
	output.width = width;
	output.length = length;
	output.volume = volume;
	cout << "\t" << output.height << "\t" << output.width << "\t" << output.length << "\t" << output.volume <<endl;
	return output;
}

//b
void address(box * structure){
    structure -> volume = structure -> height * structure -> width * structure -> length;
    cout << structure -> volume;
}
