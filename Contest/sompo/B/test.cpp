#include <bits/stdc++.h>
using namespace std;

int difficult(string buf){
    int cnt;
    int flag;
    flag=1;
    for(cnt=0;cnt<buf.length();cnt++){
        if(cnt%2==0 && islower(buf[cnt])==0){
            flag=0;
            break;
        }else if(cnt%2==1 && isupper(buf[cnt])==0){
            flag=0;
            break;
        }
    }
    return flag;
}
int main(){
    string buf;
    int flag;
    cin >> buf;
    flag=difficult(buf);
    if(flag==1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}