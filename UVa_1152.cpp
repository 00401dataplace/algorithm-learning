// 解題重點 : 預先使用二重回圈枚舉A+B的值，之後再用二重回圈配合equal_range()枚舉 -C-D的值
#include <bits/stdc++.h>
using namespace std;

const int NN = 4000 + 8;
int A[NN], B[NN], C[NN], D[NN], sum[NN*NN];

int main() {
    int T, n, c;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (int i=0; i<n; i++) {
            scanf("%d%d%d%d", &A[i], &B[i], &C[i], &D[i]);
        }
        c = 0;  // 長度
        for (int i=0; i < n; i++) 
            for (int j=0; j<n; j++) 
                sum[c++] = A[i] + B[j];
        sort(sum, sum + c);
        long long cnt = 0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                pair<int*, int*> p = equal_range(sum, sum + c, -C[i] - D[j]);
                cnt += p.second - p.first;
            }
        }
        printf("%lld\n", cnt);
        if (T) printf("\n");
    }
    return 0;
}