#include <iostream>
using namespace std;

int main() {
    double Daphne=110,Cleo=105;
    for(int year = 1;Cleo<Daphne;year++){
        Daphne += 100*0.10;
        Cleo += Cleo*0.05;
    }
    return 0;
}
