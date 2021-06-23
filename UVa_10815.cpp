// 主要是stringstream的使用
// stringstream 可以用來做數據切分，首先cin讀入字串，然後經過處理，非字母全部用空格取代，之後傳入字串流ss
// 之後用while迴圈取出，會自動用空格分割字串

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, buf;
    set<string> dict;
    while (cin >> s) {
        for (int i=0; i<s.length(); i++) {
            s[i] = isalpha(s[i]) ? tolower(s[i]) : ' ';
        }
        stringstream ss;
        ss << s;
        while (ss >> buf) dict.insert(buf);
    }
    for (set<string> :: iterator sit = dict.begin(); sit != dict.end(); sit++) {
        cout << *sit << endl;
    }
    return 0;
}