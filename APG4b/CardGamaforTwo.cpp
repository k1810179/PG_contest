#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    int Alice = 0, Bob = 0, max, index;
    for(int i = 0; i < N; i++){
        max = 0;
        for(int j = 0; j < N; j++){
            if(max < arr[j]){
                max = arr[j];
                index = j;
            }
        }
        arr[index] = 0;
        if(i % 2 == 0){
            Alice += max;
        }
        else{
            Bob += max;
        }
    }
    cout << Alice - Bob << endl;
}