#include <bits/stdc++.h>
using namespace std;

int powMod4(int base,int power){
    int buf;
    int i;
    base=base%4;
    buf=base;
    for(i=1;i<power;i++){
        buf=buf*base%4;
    }
    return buf;
}

int powMod10(int base,int power){
    int buf;
    int i;
    base=base%10;
    buf=base;
    for(i=1;i<power;i++){
        buf=buf*base%10;
    }
    return buf;
}

int main(){
    int A,B,C;
    
    cin >> A >> B >> C;

    cout << powMod10(A,powMod4(B,C));
    return 0;
}