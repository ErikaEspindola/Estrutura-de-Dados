#include<bits/stdc++.h>
using namespace std;

long long int divisores[1000005];
long long int soma[1000005];

void preenche(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=i; j<=n; j+=i) {
			divisores[j] += i;
		}
	}
}

long long int soma_divisores(int n) {
	for(int i=1; i<=1000000; i++) {
		soma[i] = soma[i-1] + divisores[i];
	}
}


int main() {
	long long int n;
  
	preenche(1000005);		
	soma_divisores(1000005);
  
	while(scanf("%lli", &n) and n!=0) {
		printf("%lli\n", soma[n]);	
	}
  
  return 0;
}
