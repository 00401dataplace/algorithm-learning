#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    unordered_map<char, int> ump;
    for (char c : s) {
        ump[c]++;
    }
    for (int i=0; i<10; i++) {
        if (ump.count((char)(i + '0'))) {
            cout << i << ump[i] << endl;
        }else{
            cout << i << "r" << 0 << endl;
        }
    }    
}