#include<bits/stdc++.h>
using namespace std;

// Mang 1 chieu
/*
	Notes : 
	- Co 2 kieu khai bao mang : tinh & dong
	+ Mang khai bao tinh : int arr[4] = {1,2,3,4}
	+ Mang khai bao dong : int arr[n] => n duoc nhap tu ban phim
*/

int main() {
	int arr_num[4] = {1, 2, 3, 4}; // Khoi tao mang so nguyen
	string arr_str[4] = {"lemon","banana","coconut","pear"};
	cout<<arr_num[0]<<endl; // In ra phan tu dau tien trong mang la 1
	cout<<arr_str[0]<<endl; // In ra phan tu dau tien trong mang la lemon
	cout<<"========================="<<endl;
	for(int i=0;i<4;i++) { // Dung vong lap de in ra tung phan tu trong mang 
		cout<<arr_num[i]<<" "<<endl;
		cout<<arr_str[i]<<" "<<endl;
	}
	cout<<"========================="<<endl;
	arr_num[0] = 10; // Thay doi gia tri truc tiep cua cac phan tu trong mang
	cout<<arr_num[0]<<endl;	
	return 0;
}

