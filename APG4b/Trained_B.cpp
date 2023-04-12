#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> vec(N);
    for(int i = 0; i < N; i++){
        cin >> vec[i];
    }
    int button = 1, count = 0, flag = 0;
    for(int i = 0; i < N; i++){
        button = vec[button-1];
        count++;
        if(button == 2){
            flag = 1;
            break;
        }
    }
    if(flag){cout << count << endl;}
    else{cout << -1 << endl;}
}