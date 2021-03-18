#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int ans=1;
    for(int i=1;i<s.size();i=i+2){
        int op;
        op=s.at(i);
        if(op=='+') ans++;
        else if(op=='-') ans--;
    }
    cout << ans << endl;
}