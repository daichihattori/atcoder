#include <bits/stdc++.h>
using namespace std;

int canHit(int V,int T,int S,int D){
    int buf;
    buf = V*(S-T);
    if(D<buf) return 0;
    else return 1;
}
int main(){
    int V,T,S,D;
    cin >> V >> T >> S >> D;
    if(canHit(V,T,S,D)) cout << "Yes";
    else cout << "No";
    return 0;
}