#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<vector<int>> input(M, vector<int>(N));
  vector<vector<int>> result(N, vector<int>(N, 0));
  for(int i = 0; i < M; i++){
    for(int j = 0; j < N; j++){
      cin >> input[i][j];
    }
  }
  for(int i = 0; i < input.size(); i++){
    for(int j = 1; j < input[0].size(); j++){
      result[input[i][j-1] - 1][input[i][j] - 1] = 1;
      result[input[i][j] - 1][input[i][j-1] - 1] = 1;
    }
  }
  int ans = result.size() * result[0].size(), count = 0;
  for(int i = 0; i < result.size(); i++){
    for(int j = 0; j < result[0].size(); j++){
      count += result[i][j];
    }
  }
  cout << (ans - N - count) / 2 << endl;
}