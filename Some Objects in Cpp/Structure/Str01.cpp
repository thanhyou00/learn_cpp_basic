#include<bits/stdc++.h>
using namespace std;

// Structure

struct Person { // Khai bao 1 struct 
	string name; 
	int age;
	string gender;
};

int main() {
	Person ps; // Goi den 1 struct
	// Nhap vao thong tin cac thuoc tinh va in ra man hinh
	getline(cin, ps.name);
	cin>>ps.age>>ps.gender;	
	cout<<"Name : "<<ps.name<<endl;
	cout<<"Age : "<<ps.age<<endl;
	cout<<"Gender : "<<ps.gender<<endl;
/*
Giai thich :
- ps.name, ps.age, ps.gender => Truy cap den cac thuoc tinh cua Person
*/	
	return 0;
}

