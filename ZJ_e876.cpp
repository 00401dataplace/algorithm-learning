#include <iostream>
using namespace std;

const int maxn = 101;
long long a[maxn];

void abc(int n){
    if(n == 101) return; 
    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += (a[i] * a[n-i-1]);
    }
    a[n] = sum;
    abc(n+1);
}

int main(){
    a[0] = 1;
    a[1] = 1;
    abc(2);
    int n;
    while(cin >> n && n){
        cout << a[n] << endl;
    }
}