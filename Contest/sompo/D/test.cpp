#include <bits/stdc++.h>
using namespace std;
int maxInsideStr(string str){
    int i;
    int ans=0;
    for(i=0;i<str.length();i++){
        if(str[i]>=ans) ans = str[i];
    }
    return ans-'0';
}
unsigned long int stringToIntWithBase(string str,int base){
    int i;
    unsigned long int ans;
    ans=str[0]-'0';
    for(i=1;i<str.length();i++){
        ans=ans*base;
        ans=ans+str[i]-'0';
    }
    return ans;
}
int cmpStringWithBaseANDInt(string str,int base,unsigned long int M){
    int i;
    unsigned long int ans;
    ans=str[0]-'0';
    for(i=1;i<str.length();i++){
        ans=ans*base;
        ans=ans+str[i]-'0';
        if(ans>M) return 1;
    }
    return 0;
}

int search(string str,unsigned long int M){
    int a=0;
    unsigned long int buf;
    //1 digit
    if(str.length()==1){
        if(str[0]=='0') return 1; 
        if((str[0]-'0') > M ) return 0;
        else return 1;
    }else{
        int d_left = maxInsideStr(str);
        int d_right = 18;
        int d_mid;
        while (d_right>=d_left){
            d_mid = d_left + (d_right - d_left)/2;
            //buf = stringToIntWithBase(str,d_mid);
            // if(buf>M) d_right = d_mid -1;
            // else if(buf<M) d_left = d_mid +1;
            if(cmpStringWithBaseANDInt(str,d_mid,M)==1) d_right =d_mid -1;
            else d_left =d_mid +1;

            // printf("%lu,%d,%d,%d",buf,d_left,d_right,d_mid);
            // getchar();
        }
        return d_mid-maxInsideStr(str);
        // int d=(18-maxInsideStr(str))/2 + 6;
        // buf = stringToIntWithBase(str,d);
        // //right
        // if(buf>M) d++;
        // else d--;
        // cout << d << endl;
    }
    return 0;
}

int main(){
    string X;
    unsigned long int M;
    int d;

    // X="100000000000000000000000000000000000000000000000000000000000";
    // M=1000000000000000000;
    cin >> X;
    cin >> M;
    d=search(X,M);
    cout << d << endl;


    //M=1500;
    //d=9;


}