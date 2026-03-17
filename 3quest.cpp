#include <iostream>
using namespace std;

int main() {
    int a[10];
    int sum = 0;

    cout << "введіть 10 чисел:\n";

    for(int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < 10; i++) {
        if(a[i] % 2 == 0) {
            sum += a[i];
        }
    }

    cout << "сума парних елементів = " << sum << endl;

    return 0;
}