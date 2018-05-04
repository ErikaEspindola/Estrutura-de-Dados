#include<bits/stdc++.h>
using namespace std;

vector<int> mov = {1, 2, 3, 2, 2}; //outro dois?

void imprime(int num) {
	switch(num) {
		case 0:
			printf("si\n");
			break;
		case 1:
			printf("do\n");
			break;
		case 2:
			printf("do#\n");
			break;
		case 3:
			printf("re\n");
			break;
		case 4:
			printf("re#\n");
			break;
		case 5:
			printf("mi\n");
			break;
		case 6:
			printf("fa\n");
			break;
		case 7:
			printf("fa#\n");
			break;
		case 8:
			printf("sol\n");
			break;
		case 9:
			printf("sol#\n");
			break;
		case 10:
			printf("la\n");
			break;
		case 11:
			printf("la#\n");
			break;
		case 12:
			printf("desafinado\n");
			break;
	}
}

int main() {
	int notas[12], num_notas;

	memset(notas, 0, sizeof(notas));
	scanf("%d", &num_notas);	
  
	for(int i = 0; i < num_notas; i++) {
		int a;
		scanf("%d", &a);
		notas[(a%12)]=1;	
	}

	int i;
	bool flag;

	for(i = 0; i < 12; i++) {
		int teste = i;
		for(int aux: mov) {
			flag = true;
			teste = (teste + aux)%12;
      
			if(notas[teste]==1) {
				flag = false;				
				break;	
			}			
		}
	  if(flag==true) break;	
	}
  
	imprime(i);
  return 0;
}
