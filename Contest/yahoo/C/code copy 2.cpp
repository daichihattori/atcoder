#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,X,Y;
    cin >> N >> X >> Y;
    vector <string> cards_ini(N);
    vector <string> cards_goal(N);

    for(int i=0;i<N;i++){
        cin >> cards_ini[i];
    }
    for(int i=0;i<N;i++){
        cin >> cards_goal[i];
    }
    int cost=0;
    int i=0;
    while(1){
        if(cards_ini[i]==cards_goal[i]){
            if(cards_ini[i+1]==cards_goal[i+1]){
            }else{
                cards_ini[i+1]=cards_goal[i+1];
                cost+=Y;
            }
        }else{
            if(cards_ini[i+1]==cards_goal[i+1]){
                cards_ini[i]=cards_goal[i];
                cost+=Y;
            }else{
                cards_ini[i]=cards_goal[i];
                cards_ini[i+1]=cards_goal[i+1];
                cost+=X;
            }
        }
        i=i+1;
        if(i==N-1) break;
    }
    cout << cost << endl;

}