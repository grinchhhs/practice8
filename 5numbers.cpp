#include <iostream>
using namespace std;

int main() {
    double a[5];

    cout << "введіть 5 чисел:\n";

    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    double max = a[0];

    for(int i = 1; i < 5; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }

    cout << "НАЙБІЛЬШЕ число = " << max << endl;

    return 0;
}