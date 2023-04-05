#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K, num = 1;
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        if(num < K){
            num *= 2;
        }
        else{
            num += K;
        }
    }
    cout << num << endl;
}