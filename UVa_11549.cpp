#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for(int i = (a); i < (b); i++)
typedef long long LL;
LL K, M;

LL next(LL x) {
    LL ans = x * x;
    while (ans >= M) ans /= 10;
    return ans;
}

int main() {
    int T, n;
    scanf("%d", &T);
    while (T--) {
        scanf("%d%lld", &n, &K);
        M = 1;
        _for(i, 0, n) M *= 10;
        LL ans = K, k1 = K, k2 = K;
        do{
            k1 = next(k1), ans = max(ans, k1);
            k2 = next(k2), ans = max(ans, k2);
            k2 = next(k2), ans = max(ans, k2);
        }while(k1 != k2);
        printf("%d", ans);
    }
}