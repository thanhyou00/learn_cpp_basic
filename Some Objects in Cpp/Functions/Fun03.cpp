#include<bits/stdc++.h>
using namespace std;

// Truyen tham so theo kieu truyen tham chieu - pass by reference

void funct_number(int &num) { // truyen tham chieu toi dia chi cua bien
	num = 5; // thay doi gia tri cua dia chi lam thay doi gia tri cua bien khoi tao trong ham main
}
// Notes : Tham khao them trong folder Pointer
int main() {
	int number = 10;
	cout<<number<<endl; // After x = 10
	funct_number(number);
	cout<<number<<endl; // Before x = 5
	return 0;
}

