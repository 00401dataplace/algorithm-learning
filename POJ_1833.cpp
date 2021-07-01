#include <cstdio>
#include <algorithm>
using namespace std;
const int nn = 1024 + 8;
int A[nn];
int main() {
    int T, n, k;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &n, &k);
        for (int i=0; i<n; i++) scanf("%d", &A[i]);
        for (int i=0; i<k; i++) next_permutation(A, A+n);
        for (int i=0; i<n; i++) printf("%d ", A[i]);
        puts("");
    }
    return 0;
}