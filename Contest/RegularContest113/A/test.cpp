#include <bits/stdc++.h>
using namespace std;

int total(int K){
    int A,B,C;
    int total=0;
    for(A=1;A<=K;A++){
        for(B=1;B<=(K/A);B++){
            for(C=1;C<=(K/(A*B));C++){
                if(A*B*C<=K) {
                    total=total+1;
                    //cout << A*B*C << endl;
                    //cout << total << endl;
                }
            }
        }
    }
    return total;
}

int main(){
    int K;
    cin >> K;
    int total_int=total(K);
    cout << total_int <<endl;
    return 0;
}