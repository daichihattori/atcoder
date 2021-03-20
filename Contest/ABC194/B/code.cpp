#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector <int> A={},B={};
    int buf;
    for(int i=0;i<N;i++){
        cin >> buf;
        A.push_back(buf);
        cin >> buf;
        B.push_back(buf);
    }
    int A_min_index=0,A_min2_index=1;
    if(A.at(0)<=A.at(1)) A_min_index=0,A_min2_index=1;
    else A_min_index=1,A_min2_index=0;
    for(int i=0;i<N;i++){
        if(A.at(i)<=A.at(A_min2_index)) {
            if(A.at(i)<=A.at(A_min_index)){
                A_min_index=i;
            }else{
                A_min2_index=i;
            }
        }
    }
    int B_min_index=0,B_min2_index=1;
    if(B.at(0)<=B.at(1)) B_min_index=0,B_min2_index=1;
    else B_min_index=1,B_min2_index=0;
    for(int i=0;i<N;i++){
        if(B.at(i)<=B.at(B_min2_index)) {
            if(B.at(i)<=B.at(B_min_index)){
                B_min_index=i;
            }else{
                B_min2_index=i;
            }
        }
    }

    if(A_min_index!=B_min_index) cout << max(A.at(A_min_index),B.at(B_min_index)) << endl;
    else{
        int buf1=A.at(A_min_index)+B.at(B_min_index);
        int buf2;
        if(A.at(A_min2_index)<=B.at(B_min2_index)){
            buf2=max(A.at(A_min2_index),B.at(B_min_index));
        }else{
            buf2=max(A.at(A_min_index),B.at(B_min2_index));
        }
        cout << min(buf1,buf2) << endl;
    }
}