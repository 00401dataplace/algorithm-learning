#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, n, y;
    vector<vector<bool>> v;
    while(cin >> x >> n >> y){
        if(n == 0) break;
        v.clear();
        for(int i = 0; i < 3; i++){
            vector<bool> vv = {true, true, true};
            v.push_back(vv);
        }
        
        int xi, yi;
        vector<pair<char, int>> all;
        char type;
        while(n--){
            cin >> type >> xi >> yi;
            int i = 10*xi + yi;
            all.push_back({type, i});            
        }
        
    }
}