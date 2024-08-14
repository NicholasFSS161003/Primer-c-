#include <iostream>
using namespace std;

double caculation(double arr[],int num);
int input(double arr[], int num);
void display(double val);

double score [10];

int main() {
   	display(caculation(score,input(score,10)));
    return 0;
}

double caculation(double arr[],int num){
    double sum = 0;
    for(int i = 0; i< num;++i)
            sum += arr[i];
    double avg = sum/num;
    return avg;
}

int input(double arr[], int num){
    int i=0;
    cout << "Enter a golf score: "<<endl;
    while(i<num&&cin>>score[i]&&score[i] >= 0){
        ++i;
        cout << "Enter a golf score: "<<endl;
    }
    return i;
}

void display(double val){
    cout<<"The average: "<<val<<endl;
}
