#include<bits/stdc++.h>
using namespace std;

// Struct with void function

struct Student {
	string name;
	int age;
	string school;
};

void getInfo(Student st){ // Khoi tao 1 ham co tham so truyen vao la struct
	getline(cin, st.name);
	cin>>st.age>>st.school;
	cout<<"Name : "<<st.name<<endl;
	cout<<"Age : "<<st.age<<endl;
	cout<<"School : "<<st.school<<endl;
};

int main() {
	Student st;
	getInfo(st); // Goi ham va truyen tham so vao
	return 0;
}

