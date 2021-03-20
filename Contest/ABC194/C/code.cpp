#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector <long long int> A={};

    for(int i=0;i<N;i++){
        int buf;
        cin >> buf;
        A.push_back(buf);
    }

    long long int ANS=0;
    long long int sum_A=0,sum_A2=0;
    for(int i=1;i<N;i++){
        sum_A+=A.at(i-1);
        sum_A2+=A.at(i-1)*A.at(i-1);
        ANS+=A.at(i)*A.at(i)*i;
        ANS-=2*A.at(i)*sum_A;
        ANS+=sum_A2;
    }
    cout << ANS << endl;
}