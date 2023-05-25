#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int max_len = max(max(A, B), C), min_len = min(min(A, B), C);
  cout << max_len - min_len << endl;
}