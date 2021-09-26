#include<bits/stdc++.h>
using namespace std;

// Nap chong ham - nap chong phuong thuc - Overloading

int funct_mult(int a, int b) {
	return a + b;	
}

double funct_mult(double a, double b) {
	return a + b;	
}

string funct_mult(string a, string b) {
	return a + b;	
}

int main() {
	cout<<funct_mult(5, 10)<<endl;
	cout<<funct_mult(5.5, 10.4)<<endl;
	cout<<funct_mult("thanhyou", "00")<<endl;
	return 0;
}

