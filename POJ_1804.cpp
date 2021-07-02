#include <algorithm>
#include <cassert>
#include <cstdio>
using namespace std;

const int NN = 1000 + 4;
int N, A[NN], B[NN];
int merge(int l, int r) {
    if (r - l <= 1) return 0;
    int mid = (l + r) / 2, ans = merge(l, mid) + merge(mid, r);
    copy(A + l, A + r, B + l);
    int a = l, b = mid, i = l;
    while (a < mid || b < r) {
        if ((a < mid && B[a] <= B[b]) || b == r) A[i++] = B[a++];
        else ans += mid - a, A[i++] = B[b++];
    }
    return ans;
}

int main(){
    int T = 0;
    scanf("%d", &T);
    for(int k = 1; k <= T; k++){
        if(k > 1) printf("\n");
        scanf("%d", &N);
        for(int i = 0; i < N; i++) scanf("%d", &A[i]);
        int ans = merge(0, N);
        printf("Scenario #%d:%d\n", k, ans);
    }
    return 0;
}