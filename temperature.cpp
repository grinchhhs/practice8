#include <iostream>
using namespace std;

int main() {
    double temp[7];
    double sum = 0;

    cout << "введіть 7 температур:\n";

    for(int i = 0; i < 7; i++) {
        cin >> temp[i];
        sum += temp[i];
    }

    double average = sum / 7;

    cout << "середня температура = " << average << endl;

    return 0;
}