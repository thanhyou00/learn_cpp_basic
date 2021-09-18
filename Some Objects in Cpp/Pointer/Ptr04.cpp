#include<bits/stdc++.h>
using namespace std;

// Mang 1 chieu

void showArray1(int* arr) { // <=> void showArray1(int arr[])
	for(int i=0;i<9;i++){
		cout<< *(arr + i) <<" ";
	//	arr++;
	}
}

void showArray2(int* arr) { // <=> void showArray2(int arr[])
	for(int i=0;i<9;i++){
		cout<< arr[i]<<" ";
	}
}
// => 2 cach su dung trong 2 ham cho ra ket qua nhu nhau

int main() {
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // khai bao 1 mang  so nguyen a gom 9 phan tu
	cout<<a<<endl; // in ra man hinh dia chi cua mang a 
	cout<< &a[0] <<endl; // in ra man hinh dia chi cua mang a tai phan tu dau tien
	showArray1(a); // goi ham 1
	cout<<endl;
	showArray2(a); // goi ham 2
	return 0;
	
	// => Mang 1 chieu co the coi nhu la 1 con tro va dia chi cua mang chinh la dia chi tai phan tu dau tien
}

