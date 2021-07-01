#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

struct Job
{
    int j, b;
    bool operator < (const Job& x) const {   // 重載運算子，給定排序依據
        return j > x.j;
    }
    /* data */
};

int main() {
    int t, kase = 1;
    while (scanf("%d", &t) == 1 && t) {
        vector<Job> vec;
        int b, j;
        for (int i=0; i<t; i++) {
            scanf("%d%d", &b, &j);
            vec.push_back((Job){j, b});
        }
        sort(vec.begin(), vec.end());
        int ans = 0, s = 0;
        for (int i=0; i<t; i++) {
            s += vec[i].b;
            ans = max(ans, s + vec[i].j);
        }
        printf("Case %d: %d\n", kase++, ans);
    }
}
