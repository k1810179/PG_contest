#include <bits/stdc++.h>
using namespace std;
 
bool Dash(int N, int M, int H, int K, string S, set<pair<int, int>>& st) {
    int currentX = 0, currentY = 0;
    for (int i = 0; i < N; i++) {
        H--;
        if (H < 0) {
            return false;
        }
        if (S[i] == 'R') {
            currentX++;
        } else if (S[i] == 'L') {
            currentX--;
        } else if (S[i] == 'U') {
            currentY++;
        } else if (S[i] == 'D') {
            currentY--;
        }
        if (st.count({currentX, currentY}) && H < K) {
            H = K;
            st.erase({currentX, currentY});
        }
    }
    return true;
}
 
int main(){
    int N, M, H, K;
    string S;
    cin >> N >> M >> H >> K >> S;
    set<pair<int, int>> st;
    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        st.insert({x, y});
    }
    if (Dash(N, M, H, K, S, st)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}