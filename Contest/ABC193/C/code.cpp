#include <bits/stdc++.h>
using namespace std;
int main(){
    long int N;
    cin >> N;

    long int max_sqr = (long int)sqrt((float)N);
    long int num=max_sqr-1;
    long int power=3;
    //long int pre_max=max_sqr;
    while(1){
        long int i=2;
        if(pow(i,power)>=N){
            num+=i-1;
            break;
        }
        else i++;
        while(1){
            if(pow(i,power)>N){
                num+=i-1;
                break;
            }else i++;
        }
        power++;
    }
    cout << N-num << endl;
}