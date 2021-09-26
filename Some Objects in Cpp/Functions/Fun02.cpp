#include<bits/stdc++.h>
using namespace std;

// Truyen tham so theo kieu truyen tham tri - pass by value

// Ham khong tra ve co tham so truyen vao
void funct_infor(string name, int age) {
	cout<<"My name is "<<name<<" and I am "<<age<<" years old ."<<endl;
}

// Ham khong tra ve co tham so truyen vao
void funct_school(int number) {
	string school;
	cout<<"Type your school : ";
	cin>>school;
	cout<<"My school is "<<school<<" and has "<<number<<" students ."<<endl;
}

// Ham khong tra ve co tham so truyen vao
void funct_obj(string object) {	
	cout<<"I am learning "<<object<<endl;
}

int main() {
	string object;
	int number;
	cout<<"Type your object : ";
	cin>>object;
	cout<<"Type your number : ";
	cin>>number;
	funct_infor("thanhyou00",21); // Truyen tham so truc tiep theo ham tao constructor 
	funct_school(number); // Tham so duoc nhap tu ban phim trong ham main 
	funct_obj(object); // Tham so duoc nhap tu ban phim trong ham main
	return 0;
}

