#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        vector<int> v = {1};

        for(int i=0; i < N; i++){
            for(int j = 0; j < i+1; j++){
                if(j <= i/2){
                    cout << v[j] << " ";
                }else{
                    cout << v[i-j] << " ";
                }
            }
            cout << endl;
        }
    }
}