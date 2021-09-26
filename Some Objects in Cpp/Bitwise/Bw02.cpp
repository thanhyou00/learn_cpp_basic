#include<bits/stdc++.h>
using namespace std;

int main() {
	int a = 12;
	int b = 25;
	// Bitwise '&' - AND
	cout<<(a&b)<<endl; 
/*
	12 = 00001100 (In Binary)
	&
	25 = 00011001 (In Binary)
=>>	8  = 00001000  ( 0 & 0 = 0 ; 0 & 1 = 0 ; 1 & 1 = 1 ) 
*Notes : Ban co the hieu nhu phep nhan : 0*0=0 ; 0*1=0 ; 1*1=1 
*/
	// Bitwise '|' - OR 
	cout<<(a|b)<<endl;
/*
	12 = 00001100 (In Binary)
	|
	25 = 00011001 (In Binary)
=>> 29 = 00011101  ( 0 | 0 = 0 ; 0 | 1 = 1 ; 1 | 1 = 1 )	
*Notes : Ban chi can nho 0|0=0 con lai se bang 1 	
*/	
	// Bitwise '^' - XOR
	cout<<(a^b)<<endl;
/*
	12 = 00001100 (In Binary)
	^
	25 = 00011001 (In Binary)
=>> 21 = 00010101  ( 0 | 0 = 0 ; 0 | 1 = 1 ; 1 | 1 = 0 )	
*Notes :  ban chi can nho 0|1=1 con lai se bang 0	
*/	
	return 0;
}

