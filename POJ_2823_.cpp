#include <cstdio>
#include <deque>
#include <iostream>
#include <queue>
using namespace std;
#define _for(i, a, b) for (int i = (a); i < (b); i++)
const int NN = 1e6 + 5;
int N, K, A[NN], Q[NN];

int main() {
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> N >> K;
    _for(i, 0, N) cin >> A[i];
    int head = 0, tail = 0;
    _for(i, 0, N) {
        while (head < tail && Q[head] <= i - K) ++head;
        while (head < tail && A[Q[tail - 1]] <= A[i]) --tail;
        Q[tail++] = i;
        if (i >= K - 1) cout << A[Q[head]] << (i == N - 1 ? "\n" : " "); 
    }
    head = 0, tail = 0;
    _for(i, 0, N) {
        while (head < tail && Q[head] <= i - K) ++head;
        while (head < tail && A[Q[tail - 1]] >= A[i]) --tail;
        Q[tail++] = i;
        if (i >= K-1) cout << A[Q[head]] << (i == N-1 ? "\n" : " ");
    } 
    return 0;
}