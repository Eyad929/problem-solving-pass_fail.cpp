#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Please enter a number: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            sum = sum + i;
        }
    }

    cout << endl << "The sum is: " << sum << endl;
    return 0;
}
