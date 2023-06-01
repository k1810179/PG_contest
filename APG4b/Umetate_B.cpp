#include <bits/stdc++.h>
using namespace std;

void fill_island(vector<vector<char>> &Island, vector<vector<bool>> &checked, int x, int y){
    if(y < 0 || x < 0 || y >= 10 || x >= 10){return;}
    if(Island[y][x] == 'x'){return;}
    if(checked[y][x]){return;}

    checked[y][x] = true;
    fill_island(Island, checked, x, y + 1); // 上
    fill_island(Island, checked, x, y - 1); // 下
    fill_island(Island, checked, x + 1, y); // 右
    fill_island(Island, checked, x - 1, y); // 左
}

bool check_connect(vector<vector<char>> Island){
    vector<vector<bool>> checked(10, vector<bool>(10));

    int x, y;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(Island[i][j] == 'o'){
                x = j;
                y = i;
                break;
            }
        }
    }

    fill_island(Island, checked, x, y);

    bool ok = true;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(Island[i][j] == 'o' && !checked[i][j]){
                ok = false;
            }
        }
    }

    return ok;
}

int main(){
    vector<vector<char>> Island(10, vector<char>(10));
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> Island[i][j];
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(Island[i][j] == 'o'){
                continue;
            }

            Island[i][j] = 'o';
            if(check_connect(Island)){
                cout << "YES" << endl;
                return 0;
            }

            Island[i][j] = 'x';
        }
    }

    cout << "NO" << endl;
}