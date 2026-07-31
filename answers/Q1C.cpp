#include <iostream>
#include <string>

using namespace std;

int main(void) {

    int vr, vg, hr, hg;
    cin >> vr;

    int hmax = 0;
    string s = "";
    for (int i = 0;i < 7;i ++) {
        cin >> vg >> hr >> hg;
        if (hg - (vg - vr) > hr) {
            s += "g ";
            hmax += hg - (vg - vr);
        }else {
            hmax += hr;
            s += "r ";
        }
    }

    cout << hmax << endl << s << endl;

    return 0;
}