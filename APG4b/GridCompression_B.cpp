#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    vector<vector<char>> table(H, (vector<char>(W, '-')));
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> table[i][j];
        }
    }

    set<int> setH, setW;
    for(int i = 0; i < H; i++){
        bool blank_row = true;
        for(int j = 0; j < W; j++){
            if(table[i][j] == '#'){
                blank_row = false;
                break;
            }
        }
        if(blank_row){
            setH.insert(i); // 空白の列のindexを保存
        }
    }

    for(int i = 0; i < W; i++){
        bool blank_column = true;
        for(int j = 0; j < H; j++){
            if(table[j][i] == '#'){
                blank_column = false;
                break;
            }
        }
        if(blank_column){
            setW.insert(i); // 空白の行のindexを保存
        }
    }

    // setH, setWから空白の行,列を除いて出力
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(!setH.count(i) && !setW.count(j)){
                cout << table[i][j];
            }
            if(j == W-1 && !setH.count(i)){
                cout << endl;
            }
        }
    }
}