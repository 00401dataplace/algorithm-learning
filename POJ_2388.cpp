// 快速排序、快速選擇
// 因為資料量過大，線性演算法一定會造成TLE

#include <cstdio>
#include <algorithm>
#include <cassert>
using namespace std;

const int NN = 1e5 + 4;
int N, A[NN];
int main() {
    scanf("%d", &N);
    for (int i=0; i<N; i++) scanf("%d", &A[i]);
    int k = N / 2;
    nth_element(A, A+k, A+N);  // 第一個參數 : array的初始位置 or Vector的迭帶begin()
                               // 第二個參數 : 第幾個數
                               // 第三個參數 : array的結束位置 or Vector的迭帶end()
    printf("%d\n", A[k]);
    return 0;
}