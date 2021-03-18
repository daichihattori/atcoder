#include <bits/stdc++.h>
using namespace std;
int f(int n){
    string tmp;
    int i=0;
    int buf=n;
    int g1,g2;
    tmp=to_string(buf);
    sort(tmp.begin(),tmp.end());
    g1=0;
    for(i=tmp.length()-1;i>0;i--){
        g1=g1+tmp[i]-'0';
        g1=g1*10;
    }
    g1=g1+tmp[0]-'0';
    g2=0;
    for(i=0;i<tmp.length()-1;i++){
        g2=g2+tmp[i]-'0';
        g2=g2*10;
    }
    g2=g2+tmp[tmp.length()-1]-'0';
    return g1-g2;
}
int main(){
    int n,k;
    cin >> n >> k;
    for(int i=0; i<k;i++){
        n=f(n);
    }
    cout << n << endl;

    return 0;
}