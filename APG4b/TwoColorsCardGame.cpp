#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, M;
    cin >> N;
    string str_S[N];
    for(int i = 0; i < N; i++){
        cin >> str_S[i];
    }
    cin >> M;
    string str_T[M];
    for(int i = 0; i < M; i++){
        cin >> str_T[i];
    }

    int sum, result = 0;
    for(int i = 0; i < N; i++){
        sum = 0;
        for(int j = 0; j < N; j++){
            if(str_S[i] == str_S[j]){
                sum++;
            }
        }
        for(int k = 0; k < M; k++){
            if(str_S[i] == str_T[k]){
                sum--;
            }
        }
        if(result < sum){
            result = sum;
        }
    }
    cout << result << endl;
}