#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector <double> A(N),P(N),X(N);
    for(int i=0;i<N;i++){
        cin >> A[i] >> P[i] >> X[i];
    }
    int min_P=-1;
    for(int i=0;i<N;i++){
        if((X[i]-(0.5+1.0*A[i]))>0){
            if(min_P==-1 || min_P>P[i]) min_P=P[i];
        }
    }
    cout << min_P << endl;
}