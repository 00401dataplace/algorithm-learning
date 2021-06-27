#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int cnt = 0, ans = 0;
        for (char c : s) {
            if (c == 'O') ans += ++cnt;
            else cnt = 0;
        }
        cout << ans << endl;
    }
}