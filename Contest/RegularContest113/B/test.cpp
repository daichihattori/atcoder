#include <bits/stdc++.h>
using namespace std;

int power(int x, int y, int p) { 
    int res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0){ 
        if (y & 1) res = (res*x) % p; 
        y = y>>1;
        x = (x*x) % p;
    } 
    return res; 
} 
int main(){
    int A,B,C;
    
    cin >> A >> B >> C;
    
    A=A%10;
    B=B%4;
    //例外処理
    if(B==2 && C%2==1){
        if(C==1) cout << (int)power(A,2)%10;
        else cout << 1;
    }else{
        C=(int)C%2;
        B=(int)power(B,C)%4;
        cout << (int)power(A,B,%10;
    }
    return 0;
}