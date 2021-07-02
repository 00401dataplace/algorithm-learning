#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, m;
    while(cin >> n >> k >> m){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        if(n == 0) break;
        vector<bool> v;     //製作兩圈
        for(int i = 0; i < (n*2); i++){
            v.push_back(false);
        }

        int count = n, ni = n-1, soon = n;   //ni(逆), soon(順), count為當前剩餘總數
        
        int kk = k % count;      //先跑一次，沒有逗號的
        if(kk == 0) kk = count;
        for(int i = 0; i < kk; i++){
            while(v[ni+1]) ni++;
            ni++;
        }
        ni %= n;
        int mm = m % count; 
        if(mm == 0) mm = count;
        for(int i = 0; i < mm; i++){
            while(v[soon-1]) soon--;
            soon--;
        }
        soon = (soon % n)+n;
        
        v[ni] = true;
        v[ni+n] = true;
        v[soon] = true;
        v[soon-n] = true;

        count--;
        if(ni >= 9) cout << " " << ni+1;
        else cout << "  " << ni+1;
        if(soon-n != ni){
            count--;
            if(soon-n >= 9) cout << " " << soon-n+1;
            else cout << "  " << soon-n+1;
        }
        
        while(count != 0){
            kk = k % count; 
            if(kk == 0) kk = count;
            for(int i = 0; i < kk; i++){
                while(v[ni+1]) ni++;
                ni++;
            }
            ni %= n;
            mm = m % count; 
            if(mm == 0) mm = count;
            for(int i = 0; i < mm; i++){
                while(v[soon-1]) soon--;
                soon--;
            }
            soon = (soon % n)+n;
            
            v[ni] = true;
            v[ni+n] = true;
            v[soon] = true;
            v[soon-n] = true;

            count--;
            if(ni >= 9) cout << "," << " " << ni+1;
            else cout << "," << "  " << ni+1;
            if(soon-n != ni){
                count--;
                if(soon-n >= 9) cout << " " << soon-n+1;
                else cout << "  " << soon-n+1;
            }
        }
        cout << '\n';
    }
    return 0;
}