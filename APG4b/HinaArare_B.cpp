#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, flag = 1;
    string S;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> S;
        if(S == "Y"){
            cout << "Four" << endl;
            flag = 0;
            break;
        }
    }
    if(flag){
        cout << "Three" << endl;
    }
}