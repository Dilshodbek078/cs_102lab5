#include <iostream>
using namespace std;

int main() {
    int num;
    int maxNum;

    cout << "Enter numbers (0 to stop): ";
    cin >> num;

    if (num == 0) {
        cout << "No numbers entered." << endl;
        return 0;
    }

    maxNum = num; 

    while (true) {
        cin >> num;
        if (num == 0)
            break;

        if (num > maxNum)
            maxNum = num;
    }

    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}
