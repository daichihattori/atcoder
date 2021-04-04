#include <bits/stdc++.h>
using namespace std;
int main(){
    int H,W,X,Y;
    cin >> H >> W >> X >> Y;
    char masu[H][W];
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin >> masu[i][j];
        }
    }
    //yoko
    int ans=0;
    X=X-1;
    Y=Y-1;
    if(masu[X][Y]!='#') ans++;
    for(int i=X-1;i>=0;i--){
        if(masu[i][Y]=='#') break;
        else ans++;
    }
    for(int i=X+1;i<H;i++){
        if(masu[i][Y]=='#') break;
        else ans++;
    }
    //tate
    for(int j=Y-1;j>=0;j--){
        if(masu[X][j]=='#') break;
        else ans++;
    }
    for(int j=Y+1;j<W;j++){
        if(masu[X][j]=='#') break;
        else ans++;
    }
    cout << ans << endl;
}