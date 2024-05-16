#include <iostream>
using namespace std;

void probA() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        int a[t], b[t];
        for (int j = 0; j < t; j++) {
            cin >> a[j];
        }
        for (int j = 0; j < t; j++) {
            cin >> b[j];
        }
        int cnt = 0;
        for (int k = 0, l = 0; k < t && l < t; ) {
            if (a[k] > b[l]) {
                ++l;
                ++cnt;
            } else {
                ++k;
                ++l;
            }
        }
        cout << cnt << endl;
    }
}

int main() {
    probA();
    return 0;
}
 
