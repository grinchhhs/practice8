#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int a[20];
    int pos = 0, neg = 0, zero = 0;

    srand(time(0));

    for(int i = 0; i < 20; i++) {
        a[i] = rand() % 101 - 50; // від -50 до 50
    }

    cout << "МАСИВ:\n";
    for(int i = 0; i < 20; i++) {
        cout << a[i] << " ";
    }

    for(int i = 0; i < 20; i++) {
        if(a[i] > 0) pos++;
        else if(a[i] < 0) neg++;
        else zero++;
    }

    cout << "\nпозитивних: " << pos << endl;
    cout << "негативних: " << neg << endl;
    cout << "нулів: " << zero << endl;

    return 0;
}