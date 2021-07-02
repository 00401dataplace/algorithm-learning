#include <bits/stdc++.h>
#define _for(i, a, b) for(int i = (a); i < (b); i++)
using namespace std;

int main(){
    int x, n, y;
    vector<vector<bool>> v;
    while(cin >> x >> n >> y){
        if(n == 0) break;
        v.clear();
        _for(i, 0, 3){
            vector<bool> vv = {true, true, true};
            v.push_back(vv);
        }
        
        int xi, yi;
        vector<pair<char, int>> all;
        char type;
        while(n--){
            cin >> type >> xi >> yi;
            int i = 100*(xi-1) + yi-1;
            all.push_back({type, i});            
        }

        for(int i = 0; i < all.size(); i++){
            xi = all[i].second % 100;
            yi = yi = all[i].second % 100;
            if(all[i].first == 'G') _for(j, 0, 3) v[j][yi-3] = false;
            else if(all[i].first == 'R'){
                if(xi <= 2) _for(j, 0, 3) v[xi][j] = false;
                if(yi >= 3 && yi <=5) _for(j, 0, 3) v[j][yi-3] = false;
            }
            else if(all[i].first == 'H'){
                vector<int> at_range;     //攻擊範圍
                bool aaa = true;
                _for(j, 0, all.size()) if(((xi+1)*100 + yi) == all[i].second) aaa = false;
                if(aaa){
                    at_range.push_back((xi+2)*100 + yi+1);
                    at_range.push_back((xi+2)*100 + yi-1);
                }

                bool aaa = true;
                _for(j, 0, all.size()) if(((xi-1)*10 + yi) == all[i].second) aaa = false;
                if(aaa){
                    at_range.push_back((xi-2)*100 + yi+1);
                    at_range.push_back((xi-2)*100 + yi-1);
                }

                bool aaa = true;
                _for(j, 0, all.size()) if(((xi)*100 + yi+1) == all[i].second) aaa = false;
                if(aaa){
                    at_range.push_back((xi+1)*100 + yi+2);
                    at_range.push_back((xi-1)*100 + yi+2);
                }

                bool aaa = true;
                _for(j, 0, all.size()) if(((xi)*100 + yi-1) == all[i].second) aaa = false;
                if(aaa){
                    at_range.push_back((xi+1)*100 + yi-2);
                    at_range.push_back((xi-1)*100 + yi-2);
                }

                _for(j, 0, at_range) if((at_range[j]<=5 && at_range[j]>=3) || (at_range[j]<=105 && at_range[j]>=103) || (at_range[j]<=205 && at_range[j]>=203)) v[at_range[j]/100][at_range[j]%100]
            }
            else{
                int max_1 = -1, max_2 = -1;
                _for(j, 0, 3){
                    _for(l, 0, all.size()){
                        if((all[l].second/100) == j){
                            if (all[l].second/100)
                        }
                    }
                }
            }
        }
    }
}