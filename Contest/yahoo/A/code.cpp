#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> time(7);//各曜日の運動時間の長さ

    //標準入力
    for(int i=0;i<7;i++){
        cin >> time[i];
    }
    //差の絶対値を取る
    int abs_max=abs(time[1]-time[0]);
    for(int i=1;i<=7;i++){
        int buf=abs(time[(i+1)%7]-time[i%7]);//日-月を計算するため、法をとった
        if(abs_max<buf) abs_max=buf;
    }
    cout << abs_max << endl;
}