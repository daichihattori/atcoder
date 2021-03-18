#include <bits/stdc++.h>
using namespace std;
int main(){
    int A=0,B=0,W=0;
    cin >> A >> B >> W;
    W=W*1000;
    int max=0,min=0;


    if(W%B==0) min=W/B;
    else min=W/B+1;
    max=W/A;
    if(W/B==W/A && W%A!=0 && W%B!=0) cout << "UNSATISFIABLE" << endl;
    else cout << min << " " << max << endl;

}
