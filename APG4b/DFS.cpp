#include <bits/stdc++.h>
using namespace std;

void search(vector<vector<char>> &board, vector<vector<bool>> &checked, int x, int y){
    if(x < 0 || x >= board[0].size() || y < 0 || y >= board.size()){return;} // 場所が迷路外なら探索終了
    if(board[y][x] == '#'){return;} // 場所が壁なら探索終了
    if(checked[y][x]){return;} // 一度到達した場所なら探索終了

    checked[y][x] = true; // (x,y)に到達したことを記録

    search(board, checked, x, y + 1); // 上に移動
    search(board, checked, x, y - 1); // 下に移動
    search(board, checked, x + 1, y); // 右に移動
    search(board, checked, x - 1, y); // 左に移動
}

bool check(vector<vector<char>> board){
    vector<vector<bool>> checked(board.size(), vector<bool>(board[0].size()));

    int x, y;
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[0].size(); j++){
            if(board[i][j] == 's'){ // 迷路内からstart位置を見つけて座標を保存
                x = j;
                y = i;
                break;
            }
        }
    }

    search(board, checked, x, y);

    bool ok = true;
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[0].size(); j++){
            if(board[i][j] == 'g' && !checked[i][j]){
                ok = false; // 盤面のgoalかつchecked配列がfalseなら到達不可
            }
        }
    }
    return ok; // それ以外なら到達可
}

int main(){
    int H, W;
    cin >> H >> W;
    vector<vector<char>> board(H, vector<char>(W));

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> board[i][j];
        }
    }

    if(check(board)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}