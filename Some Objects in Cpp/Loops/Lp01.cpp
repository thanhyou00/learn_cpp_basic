#include<bits/stdc++.h>
using namespace std;

// for loop

int main() {
// Vi du 1 : In ra cac so tu 1 den 5

	for(int i=1;i<=5;i++) { 
		cout<<i<<" "; // Output: 1 2 3 4 5
	}
/*
* Giai thich :
- i co gia tri ban dau la 1
- Dieu kien cua vong lap luon chay la i<=5 (=> khi i = 5 thi dung vong lap)
- i++ : sau moi 1 lan lap, i se tang len 1 
*/	

// Vi du 2 : In ra cac so tu 5 ve 1
	cout<<endl;
	for(int i=5;i>=1;i--) {
		cout<<i<<" ";
	}
/*
* Giai thich :
- i co gia tri ban dau la 5
- Dieu kien cua vong lap luon chay la i>=1 (=> khi i<1 thi dung vong lap)
- i-- : sau moi 1 lan lap, i se giam xuong 1
*/	
	return 0;
}

