#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int N;
    cin >> N;
    unsigned long long int power=0;
    unsigned long long int ans=0;
    unsigned long long int N_tmp=N;

    while(1){
        N=N/1000;
        if(N==0) break;
        else power++;
    }
    for(int i=0;i<power;i++){
        ans+=i*(pow(1000,i+1)-pow(1000,i))+1;
    }
    ans+=power*(N_tmp-pow(1000,power));


    cout << ans << endl;
}
