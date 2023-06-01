#include<bits/stdc++.h>
using namespace std;



int main(){
    string S;
    cin >> S;
    vector<int> arr(S.size());
    for(int i = 0; i < S.size(); i++){
        arr[i] = S[i] - '0';
    }
}