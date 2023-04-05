#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A, count = 0, times = 100;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> A;
        while(true){
            if(A % 2 != 0){
                break;
            }
            else{
                count += 1;
                A /= 2;
            }
        }
        if(count < times){
            times = count;
        }
        count = 0;
    }
    cout << times << endl;
}