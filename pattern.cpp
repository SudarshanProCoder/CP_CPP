#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code(){
	fast_io;
	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	freopen("output.in", "w", stdout);
	#endif
}

int main(){
	init_code();
	int row, col;
	cin >> row >> col;

	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}	