#include <bits/stdc++.h>
using namespace std;

int main() {
  vector <int> calories={};
  vector <string> people={};
  int buf_int;
  string buf_string;
  
  
  for(int i=0;i<6;i++){
    cin >> buf_int;
    calories.push_back(buf_int);
  }
  for(int i=0;i<6;i++){
    cin >> buf_string;
    people.push_back(buf_string);
  }
  for(int i=0;i<people.size();i++){
        cout << people.at(i);
    }
}