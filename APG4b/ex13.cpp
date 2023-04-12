#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, sum = 0;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec[i];
    sum += vec[i];
  }
  int ave = sum / N;
  for(int i = 0; i < N; i++){
    vec[i] -= ave;
    if(vec[i] < 0){
        vec[i] *= -1;
    }
    cout << vec[i] << endl;
  }
}
