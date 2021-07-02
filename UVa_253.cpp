#include <bits/stdc++.h>
define _for(i, a, b) for(int i = (a); i < (b); i++)
using namesapcestd;

int main(){
    string s;
    while(cin >> s){
        vector<char> sample_two = {s[0], s[1]};
        vector<char> sample_four = {s[2], s[3], s[4], s[5]};

        vector<int> head;
        for(int i = 6; i < 12; i++){
            if(s[i] == s[0]) if(s[17-i] == s[1]) head.push_back(i);
        }

        for(int i = 0; i < head.size(); i++){
            //太簡單了不想寫
        }
    }
}