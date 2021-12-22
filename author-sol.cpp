#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        // brute-force from a = 2, 3, 4, ... and calculate the b (b = n - a - 1),
        // then check whether gcd(a, b) = 1
        int a[3] = {0};
        for (int i = 2; ; i++) {
            if (__gcd(n - i - 1, i) != 1) {
                continue;
            }
            a[0] = n - i - 1;
            a[1] = i;
            a[2] = 1;
            break;
        }
        for (int i = 0; i < 3; i++) {
            cout << a[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}
