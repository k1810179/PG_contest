#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    int count = 1;
    for(int i = 1; i < N; i++){
        if(arr[i - 1] > arr[i]){
            count++;
        }
    }
    cout << count << endl;
}