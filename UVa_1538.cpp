#include <cstdio>
#include <cstring>

using namespace std;

const int maxn = 1e5 + 5;
int a[maxn];

int main() {
    int T, n;
    memset(a, 0, sizeof(a));
    for (int i=1; i<maxn; i++) {
        int x = i, y = i;
        while (x > 0) {y += x % 10; x /= 10;}
        if (a[y] == 0 || i < a[y]) a[y] = i;
    }
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        printf("%d", a[n]);
    }
    return 0;
}   