#include<bits/stdc++.h>
using namespace std;

// for each loop (Range-based for loop)

int main() {
	int arr[4] = {1,2,3,4};
	string fruit[3] = {"lemon","banana","coconut"};
	for(int x : arr) { 
		cout<<x<<" "; // In ra tung phan tu trong mang so nguyen : 1 2 3 4 
	}
	cout<<endl;
	for(auto y : fruit) {
		cout<<y<<" "; // In ra tung phan tu trong mang chuoi : lemon banana coconut
	}
/*
Notes : 
- Duoc su dung trong C++ 11
- Fore each loop khong lam viec voi mang con tro
- For each loop thuong duoc su dung voi array, vector, trees va maps
*/	
	return 0;
}

