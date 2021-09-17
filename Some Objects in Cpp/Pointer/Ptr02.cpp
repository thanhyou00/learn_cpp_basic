#include<bits/stdc++.h>
using namespace std;

int main() {
	int a = 10;
	int* b; // khai bao bien kieu con tro la b
	b = &a; // gia tri cua bien b duoc gan bang dia chi cua bien a (con tro b tro toi dia chi cua bien a)
	*b = 20; // thay doi gia tri cua bien con tro b <=> b = &a => *b = *&a = a = 20
	cout<<a; // ket qua lam thay doi gia tri cua bien a 
	return 0;
}

