#include <bits/stdc++.h>
#define _for(i, a, b) for(int i = (a); i < (b); i++)
using namespace std;

int main() {
    vector<int> grades, pass, nopass;
    int per;
    cin >> per;
    _for(i, 0, per) {
        int temp;
        scanf("%d", &temp);
        grades.push_back(temp);
        if (temp >= 60) {
            pass.push_back(temp);
        }else{
            nopass.push_back(temp);
        }
    }
    sort(grades.begin(), grades.end());
    sort(pass.begin(), pass.end());
    sort(nopass.begin(), nopass.end(), greater<int>());
    _for(i, 0, grades.size()) printf("%d ", grades[i]);
    printf("\n");
    if (pass.empty()) {
        printf("%d\n", nopass[0]);
        printf("worst case\n");
    }else if (nopass.empty()) {
        printf("best case\n");
        printf("%d\n", pass[0]);
    }else{
        printf("%d\n", nopass[0]);
        printf("%d\n", pass[0]);
    }
    return 0;
}