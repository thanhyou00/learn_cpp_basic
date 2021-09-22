#include<bits/stdc++.h>
using namespace std;

int main() {
	// He co so 10 : 0 1 2 3 4 5 6 7 8 9 	- Decimal (He thap phan)
	// He co so 2  : 0 1	- Binary  (He nhi phan)
	
	// CHUYEN TU HE CO SO 10 SANG HE CO SO 2
/*
	* Vi du 1 : Cho so nguyen a = 10 (Decimal) , chuyen a sang he nhi phan (Binary)
	Lan 1 : 10/2 = 5 du 0
	Lan 2 : 5/2 = 2 du 1
	Lan 3 : 2/2 = 1 du 0
	Lan 4 : 1/2 = 0 du 1 
	=> Dung lai khi ket qua bang 0 
	=> Lay ket qua tu duoi len tren (bottom to top) : 1010 (Binary)
	
	=>> Ket qua nhan duoc la : a = 10 (Decimal) = 1010 (Binary)
	
	* Vi du 2 : Cho so thuc b = 10.257 (Decimal) , chuyen b sang he nhi phan (Binary) lay sau dau phay 2 chu so 
	=> Tach phan nguyen va phan thap phan ra : 10.25 = 10 + 0.257 
	=> Ta xu ly phan thap phan 0.257
	Lan 1 : 0.257*2 = 0.514 lam tron xuong 0
	Lan 2 : 0.514*2 = 1.028 lam tron xuong 1 du 0.028
	Lan 3 : 0.028*2 = 0.056 lam tron xuong 0 
	Lan 4 : 0.056*2 = 0.112 lam tron xuong 0
	Lan N : ...
	=> Cu tiep tuc , khong co dung lai
	=> Lay ket qua tu tren xuong duoi (top to bottom) : 01 (do yeu cau chi lay 2 chu so)
	
	=>> Ket qua nhan duoc la : b = 10.257 (Decimal) = 1010.01 (Binary)  
*/

	// CHUYEN TU HE CO SO 2 SANG HE CO SO 10
/*
	* Vi du : Cho so 1010 , chuyen doi sang he thap phan
	Ta co : 1010 <=> 3 2 1 0 (Xet tuong duong theo index tu trai sang phai)
	
	<=>	1*(2^3) + 0*(2^2) + 1*(2^1) + 0*(2^0) = 8 + 0 + 2 + 0 = 10 
	
	=>> Ket qua nhan duoc la : 1010 (Decimal) = 10 (Binary)
*/	
	return 0;
}

