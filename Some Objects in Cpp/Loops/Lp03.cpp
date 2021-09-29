#include<bits/stdc++.h>
using namespace std;

// while loop

int main() {
// Vi du 1 : In ra cac so tu 1 den 5

	int i=1;
	while(i<=5) {
		cout<<i<<" ";
	i++;
	}
/*
* Giai thich :
- i co gia tri ban dau la 1
- Dieu kien cua vong lap luon chay la i<=5 (=> khi i = 5 thi dung vong lap)
- i++ : sau moi 1 lan lap, i se tang len 1 
*/	
// Vi du 2 : In ra cac so tu 5 ve 1
	cout<<endl;
	int x=5;
	while(x>=1) {
		cout<<x<<" ";
	x--;	
	}
/*
* Giai thich :
- i co gia tri ban dau la 5
- Dieu kien cua vong lap luon chay la i>=1 (=> khi i<1 thi dung vong lap)
- i-- : sau moi 1 lan lap, i se giam xuong 1
*/		
	return 0;
}

