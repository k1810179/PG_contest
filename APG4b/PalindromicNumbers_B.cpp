#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, count = 0;
    cin >> A >> B;
    for(int i = A; i <= B; i++){
        if(((i % 10) == i / 10000) && (((i / 10) % 10) == ((i / 1000) % 10))){
            count += 1;
        }
    }
    cout << count << endl;
}