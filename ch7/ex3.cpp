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
void address(box structure);

int main() {
//c
	char word[40] = "Cool";
	address(display(word,1.75,0.4,1.76,2.67));
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
	cout << "\t" << height << "\t" << width << "\t" << length << "\t" << volume <<endl;
	return output;
}

//b
void address(box structure){
	cout << &structure.maker << "\t" << &structure.height << "\t" << &structure.width << "\t" << &structure.length << "\t" << &structure.volume <<endl;
}
