#include<bits/stdc++.h>
using namespace std;

// Mang 2 chieu

int main() {
	int arr[2][3] = {1,2,3,4,5,6}; // Khai bao mang 2 chieu voi 2 hang 3 cot	
	int arr2[2][3] = {{1,2,3},{4,5,6}}; // Khai bao mang 2 chieu voi 2 hang 3 cot
	cout<<arr2[1][1]<<endl; // In ra phan tu o vi tri hang 1 va cot 1 => 5
/*
* Giai thich : 2 hang 3 cot => 2*3=6 phan tu trong mang
	1 2 3 
	4 5 6
- 	[1][1] => Lay ra phan tu o hang 1 va cot 1
+ hang 1 : 4 5 6 (ngang)
+ cot 1 : 2 5 (doc)
=> [1][1] = 5
*/
	for(int i=0;i<2;i++) {
		for(int j=0;j<3;j++) {
			cout<<arr[i][j]<<" "; // In ra cac phan tu trong mang 2 chieu 
		}
		cout<<endl; // Xuong dong tung hang
	}
	return 0;
}

