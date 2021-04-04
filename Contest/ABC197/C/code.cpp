#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    long int A[N];
    for(int i=0;i<N;i++){
        cin >> A[i]; 
    }
    long int sum_left[N];
    long int sum_right[N];
    long int XOR_min;
    long int XOR_buf;

    sum_left[0] = A[0];
    sum_right[0] = A[N-1];
    XOR_min = LONG_MAX;

    for(int i=1;i<N;i++){
        sum_left[i]=sum_left[i-1]|A[i];
        sum_right[i]=sum_right[i-1]|A[N-i-1];
    }
    for(int i=0;i<N-1;i++){
        XOR_buf=sum_left[i]^sum_right[N-i-2];
        if(XOR_min>XOR_buf) XOR_min=XOR_buf;
    }
    cout << XOR_min << endl;
}