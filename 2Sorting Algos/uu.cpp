#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void printPattern(int n) {
    int width = 2 * n - 1;
    int mid = n - 1;

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < width; j++) {
            int distance = max(abs(mid - i), abs(mid - j));
            char photo = 'a' + distance;
            cout << photo;

            if (j != width - 1) {
                cout << '-';
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Number of freedom fighters photo: ";
    cin >> n;

    printPattern(n);

    return 0;
}
