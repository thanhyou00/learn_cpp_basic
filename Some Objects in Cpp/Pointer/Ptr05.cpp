#include<bits/stdc++.h>
using namespace std;

// Con tro null 
// true : null => false : not null
int main() {
	char* ptr_null1 = NULL;
//	cout<<ptr_null1<<endl;

	if(ptr_null1){ // kiem tra gia tri cua con tro
		cout<<"Not Null"<<endl;
	} else {
		cout<<"Null"<<endl;
	}
	
	if(&ptr_null1){ // kiem tra dia chi cua con tro
		cout<<"Not Null"<<endl;
	} else {
		cout<<"Null"<<endl;
	}
	
	// => Dia chi cua bien con tro khong co null , gia tri cua bien con tro co the la null
	return 0;
}

