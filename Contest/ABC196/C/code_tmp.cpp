#include <bits/stdc++.h>
using namespace std;
int main(){
    string N;
    cin >> N;
    long int N_len=N.length();
    long int max=N_len/2;
    long int ans=0;
    if(max==1){
        long int num_left=N[0]-'0',num_right=N[1]-'0';
        if(num_left<=num_right) ans=num_left;
        else ans=num_left-1;
        cout << ans << endl;
    }else{
        for(int i=1;i<max;i++){
            ans+=9*pow(10,i-1);
        }

        if(N_len%2==0){
            string half_N_left=N.substr(0,N_len/2);
            string half_N_right=N.substr(N_len/2,N_len);

            long int num_left,num_right;
            sscanf(half_N_left.c_str(),"%ld",&num_left);
            sscanf(half_N_right.c_str(),"%ld",&num_right);
            if(half_N_left<=half_N_right) ans+=num_left-pow(10,max-1)+1;
            else ans+=num_left-pow(10,max-1);
            cout << ans << endl;
        }else{
            ans+=9*pow(10,max-1);
            cout << ans << endl;
        }
    }
        
}