#include<bits/stdc++.h>
using namespace std;

int main() {
	int total[3];
	int peso[3];
	
	for(int i=0; i<3; i++) scanf("%d", &peso[i]);
	
	total[0] = (peso[1]*2) + (peso[2]*4);
	total[1] = (peso[0]*2) + (peso[2]*2);
	total[2] = (peso[1]*2) + (peso[0]*4);
	int menor = min(min(total[0], total[1]), total[2]);
	
	printf("%d\n", menor);
	
	return 0;
}
