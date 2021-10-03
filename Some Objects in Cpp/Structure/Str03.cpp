#include<bits/stdc++.h>
using namespace std;

// Struct return function and void function

struct Staff {
	string name;
	int age;
	float salary;
};

void showStaff(Staff st) { // Ham in ra thong tin cua sinh vien
	cout<<"Name : "<<st.name<<endl;
	cout<<"Age : "<<st.age<<endl;
	cout<<"Salary : "<<st.salary<<endl;
};

Staff getStaff(Staff st) { // Ham lay thong tin cua nhan vien
	getline(cin,st.name);
	cin>>st.age>>st.salary;
	return st;
};

int main() {
	Staff st;
/*
* Giai thich : 
- Staff st : Khai bao bien st co kieu du lieu la struct
*/	
	showStaff(getStaff(st)); // Goi ham voi tham so truyen vao la ket qua tra ve cua getStaff
	return 0;
}

