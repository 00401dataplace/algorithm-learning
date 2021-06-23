#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[2][4] = {"''", "``"};
    int c, first = 1;
    while ((c = getchar()) != EOF) {
        if (c == '"')
            printf("%s", s[first]), first ^= 1;   // 使用 XOR 可以達到0, 1切換的效果
        else
            printf("%c", c);
    }
    return 0;
}