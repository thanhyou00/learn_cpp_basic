#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, arr[n]; // Khai bao mang so nguyen 1 chieu co n phan tu
	cin>>n; // Nhap so luong phan tu cua mang
	
	for(int i=0;i<n;i++) { 
		cin>>arr[i]; // Nhap vao n phan tu cho mang 1 chieu
	}
	for(int i=0;i<n;i++) {
		cout<<arr[i]<<" "; // In ra tung phan tu trong mang
	}
	
	return 0;
}

