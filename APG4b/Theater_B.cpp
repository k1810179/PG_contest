#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, l, r, sum = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> l >> r;
        sum += (r - l) + 1;
    }
    cout << sum << endl;
}