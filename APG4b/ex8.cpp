#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int mode;
    cin >> mode;
    if(mode == 1){
        int price, N;
        cin >> price >> N;
        cout << price * N << endl;
    }
    else{
        string text;
        int price, N;
        cin >> text >> price >> N;
        cout << text << "!" << endl;
        cout << price * N << endl;
    }
}