#include <iostream>
using namespace std;

int main() {
    cout << "Numbers from 1 to 100 (except those are divisible by 5):" << endl;

    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0) {
            continue;   
        }
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
