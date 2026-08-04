#include <iostream>
#include <string>

using namespace std;

int main(void) {

    char c;
    cin >> c;

    if (c >= 'a' && c <= 'z') {
        cout << "GROUP" << ((c - 'a') % 7 + 1) << endl;
    }else {
        cout << "GROUP" << ((c - 'A' + 5) % 7 + 1) << endl;
    }
//
    return 0;
}