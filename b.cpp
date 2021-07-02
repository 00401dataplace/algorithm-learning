#include <bits/stdc++.h>
using namespace std;

int all = 0;
void find_p(vector<int> v, int t){
    if(v.size() < 3 || t == 0) return;
    int sum = 0, s_1 = 0, j = -1;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
        s_1 += j*v[i];
        j++;
    }

    int x;
    if(s_1 > 0){
        x = s_1/sum;
        if((s_1 % sum) > (sum/2)) x++;
        if(x >= v.size()-3) x = v.size() - 3;
        all += v[x+1];
    }
    else{
        all += v[1];
        x = 0;
    }
    vector<int> left;
    vector<int> right;
    for(int i = 0; i <= x; i++) left.push_back(v[i]);
    for(int i = x+2; i < v.size(); i++) right.push_back(v[i]);
    find_p(left, t-1);
    find_p(right, t-1);
}

int main(){
    int n, k;
    cin >> n >> k;

    int a;
    vector<int> v;
    while(n--){
        cin >> a;
        v.push_back(a);
    }
    find_p(v, k);
    cout << all;
}