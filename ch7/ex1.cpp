#include <iostream>
using namespace std;

double harmonic(double pair1, double pair2) {
    double harmonic_val = 2 * pair1 * pair2 / (pair1 + pair2);
    return harmonic_val;
}

int main() {
    double pair1, pair2;
    while (cout << "Enter pairs of numbers:" && cin >> pair1 >> pair2) {
    if(pair1 != 0 && pair2 != 0){
        cout << harmonic(pair1, pair2) << endl;
    } else {
    	break;
	}
}

    return 0;
}
