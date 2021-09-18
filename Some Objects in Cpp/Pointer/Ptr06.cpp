#include<bits/stdc++.h>
using namespace std;

// Mang 2 chieu

void showArr(int arr[5][5]) {
	for(int i=0;i<5;i++) {
		for(int j=0;j<5;j++) {
			cout<<*(*(arr+i)+j) <<" ";
		}
		cout<<endl;
	}
}

int main(){ 
	int a[5][5] = {};
	showArr(a);
    return 0;
}
