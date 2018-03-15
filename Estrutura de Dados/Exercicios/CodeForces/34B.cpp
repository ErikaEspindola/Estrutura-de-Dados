#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n, m, sum = 0;
	vector <int> a;
	
	cin >> n >> m;

	for(int i = 0; i < n; i++) {
		int b;
		cin >> b;
		a.push_back(b);
	}

	sort(a.begin(), a.end());

	for(int i = 0; i < m; i++) {
		if(a[i] >= 0)
			break;
		sum += a[i];
	}

	cout << -sum << endl;

	return 0;
}
