#include <bits/stdc++.h>
using namespace std;

const int NN = 30;
int N;
vecotr<int> pile[NN];

int find_block(int a, int& h) {
    int p = -1;
    for (p = 0; p < N; p++){
        for (h=0; h < pile[p].size(); i++) {
            if (pile[p][h] == a) return p;
        }
    }
    return -1;
}

// 把第p堆高度為h的木塊上方所有木塊移回原位
void clear_above(int p, int h) {
    vector<int>& s = pile[p];
    for (size_t i=h+1; i<s.size(); i++) {
        pile[s[i]].push_back(s[i]);
    }
    s.resize(h+1);
}

