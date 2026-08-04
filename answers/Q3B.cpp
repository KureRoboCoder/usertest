#include <iostream>
#include <string>

using namespace std;

int main(void) {

    double n, m;
    cin >> n >> m;

    if (n >= 15.0 && m >= 8.0) {
        cout << "cream" << endl;
    }else if(n >= 10.0 && m >= 3.0) {
        cout << "milk" << endl;
    }else if(n >= 3.0) {
        cout << "lact" << endl;
    }else {
        cout <<"ice" << endl;
    }

    return 0;
}