#include<bits/stdc++.h>
using namespace std;

// De quy - Recursion 
// =>> La ham goi lai chinh no
int factorial(int n) {
	if(n>1) {
		return n*factorial(n-1);	
	} else {
		return 1;
	}
}
/*
* Giai thich : 
- Lan 1 => n = 5 : n*factorial(n-1) <=> 5*(5-1)=5*4
- Lan 2 => n = 4 : n*factorial(n-1) <=> 5*4*(4-1)=5*4*3
- Lan 3 => n = 3 : n*factorial(n-1) <=> 5*4*3*(3-1)=5*4*3*2
- Lan 4 => n = 2 : n*factorial(n-1) <=> 5*4*3*2*(2-1)=5*4*3*2*1
- Lan 5 => n = 1 : 1
=>> Moi 1 lan chay thi n lai giam di 1 (n-1), khi n<=1 thi tra ve 1
*/
int main() {
// Vi du : Tinh tich cac so tu 1 den 5 (5 giai thua)
	int num = 5;
	cout<<factorial(num)<<endl;
	return 0;
}

