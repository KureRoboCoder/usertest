#include <iostream>
#include <string>

using namespace std;

int main(void) {

    int l, r;
    cin >> l >> r;

    int count = 0;
    for (int i = l; i <= r; i++) {
        for (int j = i; j <= r; j++) {
            if ((i + j) % 10 == 7) {
                count++;
            }
        }
    }
    cout << count << endl;
}