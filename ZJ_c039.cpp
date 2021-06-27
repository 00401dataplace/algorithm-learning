#include <iostream>
using namespace std;

int get_length(int x) {
    if (x == 1) return 1;
    int count = 1;
    while (x != 1) {
        count++;
        if (x % 2 != 0) {
            x = 3 * x + 1;
        }else{
            x /= 2;
        }
    }
    return count;
}

int main() {
    int i, j;
    while (cin >> i >> j){
        int k, l;
        if (i > j){
            k = j;
            l = i;
        }else{
            k = i;
            l = j;
        }
        int ans = 0;
        for (k; k<=l; k++) {
            ans = max(ans, get_length(k));

        }
        cout << i << " " << j << " " << ans << endl;
    }
}