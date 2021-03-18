#include <bits/stdc++.h>
using namespace std;

int how_many_need(int n){
    int buf;
    buf=n%100;
    buf=100-buf;
    if(buf==0) return 100;
    else return buf;
}
int main(){
    int coin;
    cin >> coin;
    coin=how_many_need(coin);
    cout << coin;
    return 0;
}