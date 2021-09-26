#include<bits/stdc++.h>
using namespace std;

int main() {
	int a = 10;
	// Bitwise Complement '~' 
	cout<<(~a)<<endl;
/*
	10 = 1010
=>> ~a = ~10 = 0101 = -11
Notes : Dao nguoc 0 thanh 1 va 1 thanh 0	
*/	

	// Bitwise left shift '<<'
	cout<<(a<<2)<<endl;
/*
	10 = 1010
	10<<2 (dich trai 2 bit)	
=>>	1010 dich trai 2 bit la 1000
*Giai thich : Quy ve index : 0-1-2-3 khi dich trai 2 bit se thanh 2-3-4-5 , 0-1 thay bang 4-5 va mac dinh index duoc thay co bit la 0
* Vi du minh hoa : 111001 dich trai 3 bit se thanh 001000
*/	

	// Bitwise right shift '>>'
	cout<<(a>>2)<<endl;	
/*
	10 = 1010
	10<<2 (dich phai 2 bit)	
=>>	1010 dich phai 2 bit la 0010
*Giai thich : Quy ve index : 0-1-2-3 khi dich phai 2 bit se thanh 4-5-0-1 , 2-3 thay bang 4-5 va mac dinh index duoc thay co bit la 0
* Vi du minh hoa : 111001 dich phai 3 bit se thanh 000111
*Notes : Dich trai/phai n bit thi cat n bit trai/phai va day phan con lai len phan bi cat duoc thay bang n bit 0
(	Tham khao them 2 hinh trong folder dinh kem	)
*/	
	return 0;
}

