#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum = 1;
    string S;
    cin >> S;

    for(int i = 1; i < S.size(); i += 2){
        if(S[i] == '+'){
            sum += 1;
        }
        else{
            sum -= 1;
        }
    }
    cout << sum << endl;
}