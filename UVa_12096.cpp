// 因為不是簡單的整數集合或是字元字串集合，而是集合的集合，所以給定每個不同的集合唯一的ID，則每個集合就能表示成所包含元素ID的集合
// 這樣就可以用STL的stack<int>表示

// set_union : 五個參數，前四個分別為x1的頭尾、x2的頭尾，最後一個inserter(x, x.begin())則是聯集之後存放的位置
// set_intersection : 參數與set_union相同

// step1 : 使用ID函數給每個集合編號，如果存在則回傳該集合編號，如果不存在，則加入Setcache，並回傳該編號
// step2 : 使用T控制測資數量，n控制指令數量，empty集合當作單位元素，x集合當作當前操作後的結果
// step3 : 使用stack儲存集合編號

#include <bits/stdc++.h>
using namespace std;

typedef set<int> Set;
map<Set, int> IDcache;
vector<Set> Setcache;

int ID(const Set& x) {
    if (IDcache.count(x)) return IDcache[x];
    Setcache.push_back(x);
    return IDcache[x] = Setcache.size() - 1;
}

int main() {
    int T, n;
    cin >> T;
    Set empty, x;

    while (T--) {
        cin >> n;
        stack<int> s;
        for (int i=0; i<n; i++) {
            string op;  // 指令
            cin >> op;
            if (op[0] == 'P')
                s.push(ID(empty));
            else if (op[0] == 'D')
                s.push(s.top());
            else {
                const Set &x1 = Setcache[s.top()];s.pop();
                const Set &x2 = Setcache[s.top()];s.pop();
                x.clear();
                if (op[0] == 'U')
                    set_union(x1.begin(), x1.end(), x2.begin(), x2.end(), inserter(x, x.begin()));
                if (op[0] == 'I')
                    set_intersection(x1.begin(), x1.end(), x2.begin(), x2.end(), inserter(x, x.begin()));
                if (op[0] == 'A') {
                    x = x2;
                    x.insert(ID(x1));
                }
                s.push(ID(x));
            }
            cout << Setcache[s.top()].size() << endl;
        }
        cout << "***" << endl;
    }
    return 0;
}