#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << "2 " << n << " " << n << endl;

    if(n <= 26){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << (char)('a'+i) << " ";
            }
            cout << endl;
        }
        cout << endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << (char)('a'+j) << " ";
            }
            cout << endl;
        }
    }
    else{
        for(int i = 0; i < 26; i++){
            for(int j = 0; j < n; j++){
                cout << (char)('a'+i) << " ";
            }
            cout << endl;
        }
        for(int i = 0; i < n-26; i++){
            for(int j = 0; j < n; j++){
                cout << (char)('A'+i) << " ";
            }
            cout << endl;
        }
        cout << endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 26; j++){
                cout << (char)('a'+j) << " ";
            }
            for(int j = 0; j < n-26; j++){
                cout << (char)('A'+j) << " ";
            }
            cout << endl;
        }
    }
    return 0;
}