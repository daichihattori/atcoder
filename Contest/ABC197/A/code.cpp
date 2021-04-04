#include <bits/stdc++.h>
using namespace std;
int main(){
   string S;
   cin >> S;
   string _S="";
   _S.push_back(S.at(1));
   _S.push_back(S.at(2));
   _S.push_back(S.at(0));
   cout << _S << endl;
}