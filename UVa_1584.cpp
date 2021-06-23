#include <bits/stdc++.h>
using namespace std;

int less_than(string s, int p, int q) {
    int n = s.length();
    for (int i=0; i<n; i++) {
        char cp = s[(p + i) % n], cq = s[(q + i) % n];
        if (cp != cq) return cp < cq;
    }
    return 0;  // 相等，不改變
}

int main() {
    int n; 
    cin >> n;
    string s;
    while (n--) {
        cin >> s;
        int n = s.length(), ans = 0;
        for (int i=1; i<n; i++) {
            if (less_than(s, i, ans)) ans = i;
        }
        for (int i=0; i<n; i++) cout << s[(ans + i) % n];
        cout << endl;
    }
    return 0;
}