#include <bits/stdc++.h>
#define MAX 110

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n, m, vet[MAX];
	queue<int> fila;

	cin >> n >> m;

	for(int i = 1; i <= n; i++) {
		cin >> vet[i];
		fila.push(i);
	}

	while(!fila.empty()) {
		int a = fila.front();
		fila.pop();

		if(fila.empty()) {
			cout << a << endl;
			break;
		}		

		vet[a] -= m;

		if(vet[a] > 0)
			fila.push(a);
	}	

	return 0;
}
