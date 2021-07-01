#include <bits/stdc++.h>
using namespace std;

const int maxn = 1000 + 5;

int eval() { 
    int x, y, z, val;
    char c;
    if (scanf("%d", &val) == 1) {
        return val;
    }
    scanf("%c", &c);
    if (c == 'f') {
        x = eval();
        return 2 * x - 3;
    }
    if (c == 'g') {
        x = eval();
        y = eval();
        return 2*x + y - 7;
    }
    if (c == 'h') {
        x = eval();
        y = eval();
        z = eval();
        return 3*x - 2*y + z;
    }
}

int main() {
    freopen("Q_1_2_1.in", "r", stdin);
    freopen("test.out", "w", stdout);
    printf("%d\n", eval());
    return 0;
}