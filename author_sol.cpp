#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<int> vec;
		for (int i = 0; i < n; i++) {
			// find the smallest number that is greater than 'a[i]' in our 'vec' vector
			// if there is none, then simply store this number ('a[i]') in our vector
			// otherwise, replace the value of the upper bound with the current 'a[i]'
			auto it = upper_bound(vec.begin(), vec.end(), a[i]);
			if (it == vec.end()) {
				vec.push_back(a[i]);
			} else {
				*it = a[i];
			}
		}
		// display the size of the vector before printing all the elements
		cout << (int) vec.size() << " ";
		for (int i = 0; i < (int) vec.size(); i++) {
			cout << vec[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}
