#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A, B;
    string op;
    cin >> N >> A;

    for(int i = 0; N > i; i++){
        cin >> op >> B;
        if(op == "+"){
            A += B;
            cout << i+1 << ":" << A << endl;
        }
        else if(op == "-"){
            A -= B;
            cout << i+1 << ":" << A << endl;
        }
        else if(op == "*"){
            A *= B;
            cout << i+1 << ":" << A << endl;
        }
        else{
            if(B != 0){
                A /= B;
                cout << i+1 << ":" << A << endl;
            }
            else{
                cout << "error" << endl;
                break;
            }
        }
    }
}