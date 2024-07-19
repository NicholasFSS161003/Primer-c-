#include <iostream>
using namespace std;

int main (){
	int n1,n2,sum=0;
	cout<<"Enter the first number: ";
	cin>>n1;
	cout<<"Enter the second number: ";
	cin>>n2;
	for (int i=n1;i<=n2;i++)
		sum=sum + i;
	cout<<"Sum of all intergers = "<<sum;
	return 0;
}
