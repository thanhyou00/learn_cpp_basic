#include<bits/stdc++.h>
using namespace std;

int main() {
	long long a,b,n;
	unsigned long long result = 0;
	cin>>a>>b>>n;
	for(a;a<=b;a++) {
		result += n/a;
	}
	cout<<result;
	return 0;
}

