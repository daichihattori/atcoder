#include <bits/stdc++.h>
using namespace std;
struct book{
    int funny;
    int time;
};
int main(){
    int N,K;
    cin >> N >> K;
    vector <string> q(N);
    string buf;
    getline(cin,buf);
    for(int i=0;i<N;i++){
        getline(cin,q.at(i));
    }
    vector <book> book_list={};
    for(int i=0;i<N;i++){
        string buf;
        int buf_int;
        book buf_book;
        if(q.at(i).find("buy ")!= string::npos) {
            buf = regex_replace(q.at(i),regex("buy "),"");
            sscanf(q.at(i).c_str(),"%d",&buf_int);
            buf_book.funny=buf_int;
            buf_book.time=0;
        }
        for(int i)
    }

}