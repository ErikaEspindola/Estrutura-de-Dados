#include <bits/stdc++.h>
using namespace std;
#define N 8

int fat[N] = {40320, 5040, 720, 120, 24, 6, 2, 1};

int main() {
	ios_base::sync_with_stdio(false);

	int n, cont=0;
	
	cin >> n;

	while(n>0) {
		for(int i=0; i<N; i++) {
			if(fat[i] <= n) {
				n -= fat[i];
				cont++;
				break;
			}
		}
	}

	cout << cont << endl;
	
  return 0;
}
