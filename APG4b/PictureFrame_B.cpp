#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, W;
    string S;
    cin >> H >> W;
    for(int i = 0; i < W+2; i++){
        cout << '#';
    }
    cout << endl;
    for(int i = 0; i < H; i++){
        cin >> S;
        cout << '#' << S << '#' << endl;
    }
    for(int i = 0; i < W+2; i++){
        cout << '#';
    }
    cout << endl;
}