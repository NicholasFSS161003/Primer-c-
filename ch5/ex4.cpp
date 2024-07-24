#include <iostream>
using namespace std;

int main() {
    double Daphne=110,Cleo=105;
    int year = 1;
    for(;Cleo<Daphne;year++){
        Daphne += 100*0.10;
        Cleo += Cleo*0.05;
    }
    cout<<"Years taken for the value of Cleo investment to exceed"<<endl;
    cout<<"the value of Daphne investment: "<<year<<endl;
    cout<<"Value of Daphne investment: $"<<Daphne<<endl;
    cout<<"Value of Cleo investment: $"<<Cleo;
    return 0;
}
