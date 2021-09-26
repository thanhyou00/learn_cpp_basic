#include<bits/stdc++.h>
using namespace std;

// Ham khong tra ve
void funct_hello() { // Khoi tao 1 ham 
	cout<<"Hello function !"<<endl;
}

// Ham tra ve
int funct_sum() { // Khoi tao 1 ham
	int a = 5, b = 10;
	return a + b ; // Tra ve ket qua la 1 so nguyen
}

/*
	Notes : 
	- Ham tra ve kieu boolean, int , float, string ...
	- Ham khong tra ve la ham void
*/

int main() {
	funct_hello(); // Goi ham da khoi tao trong ham main
	cout<<funct_sum()<<endl; 
	return 0;
}

