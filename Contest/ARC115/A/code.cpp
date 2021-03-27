#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    cin >> N >> M;
    vector <string> S(N);
    for(int i=0;i<N;i++){
        cin >> S.at(i);
    }
    long int odd_hamming_weight=0,even_hamming_weight=0;
    for(int i=0;i<N;i++){
        int hamming_weight=0;
        for(int j=0;j<M;j++){
            if(S.at(i).at(j)=='1') hamming_weight++;
        }
        if(hamming_weight%2==0) even_hamming_weight++;
        else odd_hamming_weight++;
    }
    long int ans=even_hamming_weight * odd_hamming_weight;
    cout << ans << endl;
}