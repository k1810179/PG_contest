#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, a;
    cin >> N >> M;
    vector<int> vec(N), vec2(M*2);
    for(int i = 0; i < (M * 2); i++){
        cin >> vec2[i];
    }
    for(int j = 0; j < N; j++){
        for(int i = 0; i < (M * 2); i++){
            if(vec2[i] == j+1){vec[j]++;}
        }
    }
    for(int i = 0; i < N; i++){
        cout << vec[i] << endl;
    }
}