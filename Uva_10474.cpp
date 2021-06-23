// 排序與查找
// 排序使用algorithm裡面的sort函數
// 查找使用lower_bound函數，回傳值是目標記憶體位址，所以先減掉陣列初始位址就可以得到記憶體偏移量，就會是索引值

#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 10000;

int main() {
    int n, q, x, a[maxn], kase = 0;
    while (scanf("%d%d", &n, &q) == 2 && n) {
        printf("CASE# %d:\n", ++kase);
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        sort(a, a+n);
        while(q--) {
            scanf("%d", &x);
            int p = lower_bound(a, a+n, x) - a;
            if (a[p] == x) printf("%d found at %d\n", x, p+1);
            else printf("%d not found\n", x);
        }
    }
    return 0;
}