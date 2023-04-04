#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, sum = 0;
    cin >> N;
    int x = N;
    while(N){
        sum += (N % 10);
        N /= 10;
    }
    if(x % sum == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}