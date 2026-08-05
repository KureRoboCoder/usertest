#include <iostream>
#include <string>

using namespace std;

int main(void) {

    int l, r;
    cin >> l >> r;

    int count = 0;
    for (int i = l; i <= r; i++) {
        for (int j = i; j <= r; j++) {
            for (int k = j; k <= r; k++) {
                if ((i + j + k) % 3 == 0)   count++;//
            }
        }
    }
    cout << count << endl;
}