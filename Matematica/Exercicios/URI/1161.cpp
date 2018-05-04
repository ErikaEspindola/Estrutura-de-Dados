#include<bits/stdc++.h>

using namespace std;

long long int fat(long long int x) {
    if(x==0) return 1;
    return fat(x-1) * x;
}

int main() {
    long long int M, N;

    while((scanf("%lld %lld", &M, &N) != EOF)){
        cout<<(fat(M) + fat(N))<<endl;
    }

    return 0;
}
