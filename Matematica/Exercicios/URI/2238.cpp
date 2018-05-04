#include<bits/stdc++.h>
using namespace std;

list<int> divisores;

int main() {
	int a, b, c, d;
	int num;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
  
	for(int i=1; i*i<=c; i++) {
		if(c%i==0) {
			divisores.push_back(i);
			divisores.push_back(c/i);	
		}	
	}		
  
	bool flag = false;
	divisores.sort();
  
	for(auto &v: divisores) {
		if(v%a==0 && v%b!=0 && d%v!=0) {
			printf("%d\n", v);
			flag = true;
			break;	
		}	
	}
  
	if(flag==false) printf("-1\n");

  return 0;
}
