#include <bits/stdc++.h>
using namespace std;


void Ways(int k, int i, int n, int set[], int target, vector<int>& ans){

	if (target == 0) {
        cout<<"Way - "<<++k<<" : ";
		for (int i = 0; i < ans.size(); i++) cout<<ans[i]<<" ";
		cout << endl;
		return;
	}

	if (i == n) return;	

	Ways(k, ++i, n, set, target, ans);


	if (set[i] <= target) {

		ans.push_back(set[i]);
		
		Ways(k, ++i, n, set, target - set[i], ans);

		ans.pop_back();
	}
}

int main(){
	int set[] = { 1, 2, 3, 4, 5, 6 };
	int sum = 9;
	vector<int> ans;
	Ways(0, 0, 6, set, sum, ans);
	return 0;
}
