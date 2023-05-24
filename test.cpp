#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int N = 100000;
  int table[N][N], copy[N][N];
  clock_t startTime, endTime;
  startTime = clock();
  
  for(int i = 1; i < N; i++){
    for(int j = 1; j < N; j++){
      table[i][j] = i * j;
      copy[i][j] = table[i][j];
    }
  }
  
  endTime = clock();
  cout << (double)(endTime - startTime) / CLOCKS_PER_SEC << endl;
}