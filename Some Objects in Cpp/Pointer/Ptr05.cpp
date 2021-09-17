#include<bits/stdc++.h>
using namespace std;

// Con tro null 
// true : null => false : not null
int main() {
	char* ptr_null1 = NULL;
//	cout<<ptr_null1<<endl;

	if(ptr_null1){ // kiem tra gia tri cua con tro
		cout<<"Null"<<endl;
	} else {
		cout<<"Not null"<<endl;
	}
	
	if(&ptr_null1){ // kiem tra dia chi cua con tro
		cout<<"Null"<<endl;
	} else {
		cout<<"Not null"<<endl;
	}
	return 0;
}

