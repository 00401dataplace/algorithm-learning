#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    c /= b;
    vector<long long> vec;
    for (int i=0; i<a; i++) {
        long long temp;
        cin >> temp;
        vec.push_back(temp);
    }
    long long count = 0;
    for (int i=0; i<a-1; i++) {
        long long first = vec[i] / b, second = vec[i+1] / b;
        if (first - second > c) {
            count = count + (first-second - c);
            vec[i] -= (first-second - c) * b;
        }else if (second - first > c) {
            count = count + (second - first - c);
            vec[i+1] -= (second - first - c) * b;
        }
    }
    for (int i=vec.size()-1; i>=1; i--) {
        long long first = vec[i] / b, second = vec[i-1] / b;
        if (first - second > c) {
            count = count + (first-second-c);
            vec[i] -= (first-second-c) * b;
        }else if (second - first > c) {
            count = count + (second - first-c);
            vec[i-1] -= (second - first - c) * b;
        } 
    }
    cout << count << endl;
}