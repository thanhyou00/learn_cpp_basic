#include<bits/stdc++.h>
using namespace std;

int main() {
	int m,n,arr[m][n]; // Khai bao mang 2 chieu voi m hang va n cot
	cout<<"Nhap vao hang va cot :"<<endl;
	cin>>m>>n; 
	cout<<"Nhap cac phan tu:"<<endl;
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			cin>>arr[i][j]; // Nhap vao tung phan tu trong mang 2 chieu
		}
	}
	cout<<"In ra mang 2 chieu :"<<endl;
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			cout<<arr[i][j]<<" "; // In ra tung phan tu trong mang 2 chieu
		}
		cout<<endl;
	}
	return 0;
}

