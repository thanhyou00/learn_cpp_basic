#include<iostream>

using namespace std;

// Con tro tro den con tro ( Con tro cap 2 )

int main() {
	int** arr;
	int n,m;
	cin>>n>>m;
	// Cap phat dong
	arr = new int* [n];
	for(int i=0;i<n;i++){
		arr[i] = new int [m];
	}
	// Nhap di lieu cho tung phan tu
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	// In ra man hinh 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<*(*(arr+i)+j)<<" ";
		}
		cout<<endl;
	}
	// Giai phong bo nho cho mang cac con tro
	delete[] arr;
	return 0;
}
