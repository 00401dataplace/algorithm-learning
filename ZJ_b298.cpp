#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int, int>> vec;
    vector<int> nogood;
    vector<int> check;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int i=0; i<b; i++) {
        int a, b;
        cin >> a >> b;
        vec.push_back({a, b});
    }
    for (int i=0; i<c; i++) {
        int a;
        cin >> a;
        nogood.push_back(a);
    }
    for (int i=0; i<d; i++) {
        int a;
        cin >> a;
        check.push_back(a);
    }
    
}