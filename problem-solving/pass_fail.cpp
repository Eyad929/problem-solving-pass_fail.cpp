#include <iostream>
using namespace std;

int main() {
    int score;
    cin >> score;

    if (score >= 85) {
        cout << "Excellent" << endl;
    } else if (score >= 50) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }
    return 0;
}
