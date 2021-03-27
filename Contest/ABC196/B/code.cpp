#include <bits/stdc++.h>
using namespace std;
int main(){
    string X;
    cin >> X;
    string ans="";
    for(int i=0;i<X.length();i++){
        if(X[i]=='.') break;
        else{
            ans+=X[i];
        }
    }
    cout << ans <<endl;
}