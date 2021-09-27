#include<bits/stdc++.h>
using namespace std;

// Nap chong ham - nap chong phuong thuc - Overloading

int funct_mult(int a, int b) {
	return a + b;	
}

double funct_mult(double a, double b) {
	return a + b;	
}

void funct_mult(string a, string b) {
	cout<< a + b <<endl;
}
/*
	Notes :
	- Ten ham co the giong nhau nhung kieu du lieu cua bien phai khac nhau
	- Co the la ham co tra ve & ham khong tra ve
*/

int main() {
	cout<<funct_mult(5, 10)<<endl;
	cout<<funct_mult(5.5, 10.4)<<endl;
	funct_mult("thanhyou", "00"); // Goi ham va truyen tham so truc tiep cho ham
	return 0;
}

