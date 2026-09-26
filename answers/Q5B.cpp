#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {

    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    sort(h.begin(), h.end(), greater<int>());
    
    int a;
    cin >> a;

    cout << h[a - 1] << endl;
}