#include<bits/stdc++.h>
using namespace std;

int main() {
	int a = 10; // khai bao 1 bien a va gan gia tri la 10
	cout<< &a << endl; // in ra man hinh dia chi cua bien a
	cout<< *&a << endl; // in ra man hinh gia tri tai dia chi cua bien a <=> co the hieu la gia tri cua bien a 
	cout<< a; // in ra man hinh gia tri cua bien a
	// => den doan nay ban co the hieu co ban la gia tri cua bien a la gia tri tai dia chi cua bien a
	return 0;
}

