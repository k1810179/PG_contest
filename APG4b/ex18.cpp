#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  vector<vector<char>> table(N, vector<char>(N, '-'));
  for(int i = 0; i < A.size(); i++){
    table[A[i] - 1][B[i] - 1] = 'o';
    table[B[i] - 1][A[i] - 1] = 'x';
  }
  for(int i = 0; i < table.size(); i++){
    for(int j = 0; j < table[0].size(); j++){
        cout << table[i][j];
        if(j == table[0].size() - 1){
            cout << endl;
        }
        else{
            cout << ' ';
        }
    }
  }
}
