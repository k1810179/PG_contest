#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  string S, T;
  cin >> N >> S >> T;
  bool flag = true;
  for(int i = 0; i < N; i++){
    if(S[i] == T[i]){
      continue;
    }
    else if((S[i] == '1' && T[i] == 'l') || (S[i] == 'l' && T[i] == '1')){
      continue;
    }
    else if((S[i] == '0' && T[i] == 'o') || (S[i] == 'o' && T[i] == '0')){
      continue;
    }
    else{
      flag = false;
      break;
    }
  }
  if(flag){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}