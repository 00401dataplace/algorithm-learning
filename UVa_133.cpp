#include <bits/stdc++.h>
#define _for(i, a, b) for(int i = (a); i < (b); i++)
using namespace std;

int main() {
    int n, k, m;
    while(scanf("%d%d%d", &n, &k, &m) == 3 && n != 0) {
        vector<int> a(n);
        int ki = 0, mi = n-1, cnt = 0, cntk = 0, cntm = 0;
        while (cnt < n) {
            while (true) {
                if (a[ki] != -1) cntk++;
                if (cntk == k) break;
                ki = (ki+1) % n;
            }
            while (true) {
                if (a[mi] != -1) cntm++;
                if (cntm == m) break;
                mi = (mi+(n-1)) % n;
            }
            if (ki == mi) {
                a[ki] = -1;
                cnt++;
                printf("%3d%s", ki+1, cnt == n ? "" : ",");
            }else{
                a[ki] = -1;
                a[mi] = -1;
                cnt += 2;
                printf("%3d%3d%s", ki+1, mi+1, cnt == n ? "" : ",");
            }
            cntk = cntm = 0;
        }
        printf("\n");
    }
    return 0;
}