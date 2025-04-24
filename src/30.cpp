#include <iostream>
using namespace std;

int main() {
    int n = 5;
    cout << "The sum of 1 to " << n << " is: ";
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}
