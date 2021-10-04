#include<bits/stdc++.h>
using namespace std;

// Pointers to Structure 

struct Distance { // Khoi tao 1 struct
    int feet;
    float inch;
};

int main() {
	Distance *ptr, temp; // Khai bao cac bien voi kieu du lieu struct	
	ptr = &temp;
		
	cin>>(*ptr).feet>>(*ptr).inch; // Nhap vao gia tri cho cac bien trong struct
	cout<<(*ptr).feet<<" and "<<(*ptr).inch<<endl; // In ra man hinh
	cout<<temp.feet<<" and "<<temp.inch<<endl;
	cout<<ptr->feet<<" and "<<ptr->inch<<endl;
/*
* Giai thich :
- *ptr : Bien con tro co kieu du lieu struct
- temp : Bien thuong co kieu du lieu struct
- ptr = &temp : Gia tri cua bien con tro duoc gan bang dia chi cua bien thuong
=> 3 cach tuong duong nhau dung de truy cap : (*ptr).feet <=> ptr->feet <=> temp.feet va (*ptr).inch <=> ptr->inch <=> temp.inch
=>> Neu ban chua hieu hay quay lai phan Pointer de on tap lai nhe :33
*/	
	return 0;
}

