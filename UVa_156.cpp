// to_lower函數內部使用tolower函數轉換
// repr函數用來標準化字串，使用transform函數與sort函數
// transform() : 四個參數，前兩個是字串的頭尾，第三個是轉換結果的儲存位置(給定一個迭帶初始位置)，最後一個是要轉換的函數

#include <bits/stdc++.h>
using namespace std;

char to_lower(char c) {
    return tolower(c);
}

string repr(const string& s) {
    string ans = s;
    transform(ans.begin(), ans.end(), ans.begin(), to_lower);
    sort(ans.begin(), ans.end());
    return s;
}

int main() {
    map<string, int> cnt;
    vector<string> words, ans;
    string s;
    while (cin >> s && s.front() != '#') {
        words.push_back(s);
        cnt[repr(s)]++;
    }
    for (int i=0; i<words.size(); i++) {
        if (cnt[repr(words[i])] == 1) ans.push_back(words[i]);
    }
    sort(ans.begin(), ans.end());
    for (int i=0; i<ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}