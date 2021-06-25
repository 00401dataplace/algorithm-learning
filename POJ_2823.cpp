#include <cstdio>
#include <queue>
#include <vector>
#include <iostream>
#define _for(i, a, b) for(int i = (a); i < (b); i++)
using namespace std;

const int maxn = 1e6 + 5;
int A[maxn];
int main() {
    int n, k;
    cin >> n >> k;
    _for(i, 0, n) scanf("%d", &A[i]);

    int L = 0;
    int R = k - 1;
    vector<int> maxv, minv;
    while (R < n) {
        priority_queue<int> q1;
        priority_queue<int, vector<int>, greater<int> > q2;
        for (int i=L; i<=R; i++) {
            q1.push(A[i]);
            q2.push(A[i]);
        }
        maxv.push_back(q1.top());
        minv.push_back(q2.top());
        L++;
        R++;
    }
    for (int i=0; i<minv.size(); i++) 
        cout << minv[i] << " ";
    cout << endl;
    for (int i=0; i<maxv.size(); i++)
        cout << maxv[i] << " ";
}