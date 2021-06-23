// 因為排序數量過多 0 < n <= 2 000 000，所以無法使用sort函數
// 但是因為資料範圍較小 0  < age <= 100 ，可以利用計數排序法。
// 計數排序法 : 紀錄每個元素的出現個數在初始的arr裡面，使用first = 1來判斷是不是第一個數字。
#include <cstdio>
#include <cstring>   // 為了使用memset()

int main() {
    int x, n, c[101];
    while ((scanf("%d", &n) == 1) && n) {
        memset(c, 0, sizeof(c)); // 初始化c， 元素全部為0
        for (int i=0; i<n; i++) {
            scanf("%d", &x);
            c[x]++;
        }
        int first = 1;
        for (int i=1; i<=100; i++) {   // 第一層迴圈控制age
            for (int j=0; j < c[i]; j++) {  // 第二層迴圈控制出現次數
                if (!first) printf(" ");   // 從第二個數開始輸出之前都加一個空白
                first = 0;
                printf("%d", i);
            }
        }
        printf("\n");
    }
    return 0;
}
