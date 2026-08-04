#include <iostream>
#include <string>

using namespace std;

int main(void) {

    int n;
    cin >> n;

    int count = 0;
    for (int i = 2; i <= 7; i++) {
        while(!(n % i)) {
            count++;
            n /= i;
        }
    }

    cout << count << endl;

    return 0;
}