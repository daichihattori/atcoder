#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,X,Y;
    cin >> N;

    vector <string> cards_init(N);
    vector <string> cards_goal(N);

    for(int i=0;i<N;i++){
        cin >> cards_init.at(i);
    }
    for(int i=0;i<N;i++){
        cin >> cards_goal.at(i);
    }

    int cnt_init_R=0,cnt_goal_R=0;
    for(int i=0;i<N;i++){
        //if(cards_init.at(i)=="R") cnt_init_R++;
        if(cards_goal.at(i)=="R") cnt_goal_R++;
    }
    int cost_buf;
    vector <string> cards_buf;
    vector <int> where_R(cnt_goal_R);
    for(int i=0;i<cnt_goal_R;i++){
        where_R.at(i)=i;
    }

    while(1){//列挙
        for(int i=0;i<N;i++){
            if(cards_buf.at(i)!=cards_goal.at(i)) cost_buf+=X;
        }
    }
    //マルバツの数が同じものを作成




}