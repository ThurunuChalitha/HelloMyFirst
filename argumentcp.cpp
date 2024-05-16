#include <iostream>
using namespace std;

int main() {
    int x;
    int age = 25;
    bool isStudent = true;
    cin >> x;

    cout << x / 3 << " and " << x * 2 << "\n";

    if (age > 18 && isStudent) {
        cout << "You are eligible for a student discount";
    }

    return 0;
}
