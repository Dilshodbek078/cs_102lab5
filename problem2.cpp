#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    cout << "The first 10 natural numbers are: ";

    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
        sum = sum + i;
    }
    cout << endl;
    cout << "The sum of the first 10 natural numbers: " << sum << endl;
    
    return 0;
}
