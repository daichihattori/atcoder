#include <bits/stdc++.h>
using namespace std;

struct baggage{
    int w;
    int v;
};
int main(){
  int N,M,Q;
  cin >> N >> M >> Q;

  vector <struct baggage> B(N);
  for(int i=0;i<N;i++){
      cin >> B.at(i).w >> B.at(i).v;
  }

  vector <int> X(M);
  for(int i=0;i<M;i++){
      cin >> X.at(i);
  }

  vector <int> Query_L(Q);
  vector <int> Query_R(Q);
  for(int i=0;i<Q;i++){
      cin >> Query_L.at(i) >> Query_R.at(i);
  }
  
}
