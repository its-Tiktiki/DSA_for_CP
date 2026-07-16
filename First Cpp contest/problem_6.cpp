#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        vector<int> prev_v = {1};

        for(int i=0; i < N; i++){
            vector<int> current_v = {1};
            for(int k = 1; k < i; k++){
                current_v.push_back(prev_v[k] + prev_v[k-1]);
            }

            if(i > 0){
                current_v.push_back(1);
            }
            for (int x : current_v){
                cout << x << " ";
            }
                

            prev_v = current_v;
            cout << endl;
        }
    }
}