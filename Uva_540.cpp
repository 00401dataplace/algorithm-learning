#include <bits/stdc++.h>
using namespace std;

const int maxt = 1000 + 10;

int main() {
    int t, kase = 0;
    while (scanf("%d", &t) == 1 && t) {
        printf("Scenario #%d\n", ++kase);

        // 紀錄所有人的團隊編號
        map<int, int> team;   // key是隊員，value用第幾隊當成編號，題目給t就是隊的總數
        for (int i=0; i<t; i++) {   // 上限是t，總共有t隊
            int n, x;   // n是隊員數量, x是隊員
            scanf("%d", &n);
            while (n--) {
                scanf("%d", &x);
                team[x] = i;   // i是第幾隊
            }
        }

        // 模擬
        // q是團隊編號的隊列，q2是每個團隊自己的隊列
        queue<int> q, q2[maxt];   
        for (;;) {
            int x;
            char cmd[10];   // 用來放置指令
            scanf("%s", cmd);
            if (cmd[0] == 'S') break;
            else if (cmd[0] == 'D') {
                int t = q.front();  // 取得隊首的隊員屬於哪個團隊
                printf("%d\n", q2[t].front());  // 利用團隊編碼從每個團隊自己的隊列取得第一個隊員
                q2[t].pop();  // 取出後出隊
                if (q2[t].empty()) q.pop();  // 如果該團隊自己的隊列已經無隊員，則將團隊編號隊列的第一項出隊(因為第一項就是該隊)
            }
            else if (cmd[0] == 'E') {
                scanf("%d", &x);
                int t = team[x];  // team[x] 的值是隊的編號，也就是map的value
                if (q2[t].empty()) q.push(t);  // 檢查是否有該團隊的隊列，如果沒有，代表是新的團隊，所以在團隊隊列要入隊
                q2[t].push(x);  // 加入該團隊自己的隊列
            }
        }
        printf("\n");
    }
    return 0;
}