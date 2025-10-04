#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Numbers from 0 to " << n << " that are divisible by 10 are: ";

    for (int i = 0; i <= n; i++) {
        if (i % 10 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
