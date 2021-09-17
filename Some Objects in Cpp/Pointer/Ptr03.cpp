#include<bits/stdc++.h>
using namespace std;

int main() {
	int a = 10, b = 20, c = 30;
	int* d;
	d = &a;
	*d = 11;
	d = &b;
	cout<<a<<endl;
	*d = 21;
	cout<<b<<endl;
	d = &c;
	*d = 31;
	cout<<c<<endl;
	// => con tro tro den tung dia chi cua tung bien va thay doi gia tri cua bien do thong qua thay doi gia tri cua bien con tro
	return 0;
}

