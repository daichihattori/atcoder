#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector <int> A(N);
    vector <int> B(N);
    vector <vector <int> > C(N,vector<int>(N));

    for(int j=0;j<N;j++){
        for(int i=0; i<N;i++){
            cin >> C.at(j).at(i);
        }
    }
    int flag=1;
    for(int j=0;j<N;j++){
        int buf=C.at(j+1).at(0)-C.at(j).at(0);
        for(int i=0;i<N;i++){
            int tmp=C.at(j+1).at(i)-C.at(j).at(i);
            if(buf!=tmp){
                flag=0;
            }else{
                
            }
        }
    }
    // int buf_min=0;
    // int flag=1;
    // buf_min=C.at(1).at(0)-C.at(0).at(0);
    // for(int i=1;i<N;i++){
    //     int tmp_A=C.at(i).at(0)-C.at(i-1).at(0);
    //     int tmp_B=C.at(0).at(i)-C.at(0).at(i-1);

    //     for(int j=0;j<N;j++){
    //         int buf;
    //         //Aを確認
    //         buf=C.at(i).at(j)-C.at(i-1).at(j);
    //         if(buf!=tmp_A){
    //             flag=0;
    //             break;
    //         }else{
    //             tmp_A=buf;
    //         }
    //         //Bを確認
    //         buf=C.at(j).at(i)-C.at(j).at(i-1);
    //         if(buf!=tmp_B){
    //             flag=0;
    //             break;
    //         }else{
    //             tmp_B=buf;
    //         }
    //     }
    //     if(flag==0) break;
    //     A.at(i)=tmp_A;
    //     B.at(i)=tmp_B;
    //     if(tmp_A<buf_min) buf_min=tmp_A;
    //     if(tmp_B<buf_min) buf_min=tmp_B;
    // }
    // if(flag==1) cout<< "Yes" << endl;
    // if(flag==0) cout<< "No" << endl;
}