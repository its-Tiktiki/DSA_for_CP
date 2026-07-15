#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;

	for(int i = 0; i < t; i++){
		int num;
		cin >> num;
		int ans = 1;
		for(int j = 0; j < num; j++){
			int n;
			cin >> n;
			ans *= n;
		}
		if(ans % 10 == 2 || ans % 10 == 3 || ans % 10 == 5){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}