#include <iostream>
using namespace std;
int main() {
    int n, reverse = 0;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Digits in reverse order: ";

    while (n > 0) {
        int digit = n % 10;      
        cout << digit;           
        n = n / 10;              
    }
    cout << endl;
    return 0;
}
