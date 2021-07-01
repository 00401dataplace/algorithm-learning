#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    string s;
    while (T--) {
        cin >> s;
        map<char, int> mp;
        char prev = s[0];
        for (int i=0; i<s.size(); i++) {
            char cur = s[i];
            if (isdigit(s[i+1])) {
                if (isdigit(s[i+2])) {
                    mp[cur] += stoi(s[i+1]) * 10 + stoi(s[i+2]);
                }else{
                    mp[cur] += stoi(s[i+1]);
                }
            }
        }
    }
}