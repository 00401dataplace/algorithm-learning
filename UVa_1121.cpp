#include <algorithm>
#include <cstdio>
using namespace std;

const int maxn = 1e5 + 5;

int a[maxn], b[maxn];

int main() {

    for (int n, s; scanf("%d%d", &n, &s) == 2 && n;) {
        // 輸入陣列a
        for (int i=1; i <= n; i++) {
            scanf("%d", &a[i]);
        }
        // 計算前綴和，b[0] = 0;  b[i] = b[i-1] + a[i]
        b[0] = 0;
        for (int i=1; i<=n; i++) b[i] = b[i-1] + a[i];

        // 枚舉終點
        // ans = n+1 因為ans最大是n，而使用n+1確保可以被替代
        int i = 1, ans = n+1;
        for (int j=1; j <= n; j++) {
            if (b[i-1] > b[j] - s) continue;
            while (b[i] <= b[j] - s) i++;
            ans = min(ans, j-i+1);
        }

        // 這邊要檢查ans的值，有可能還是n+1
        printf("%d\n", ans == n+1 ? 0 : ans);
    }
    return 0;
}