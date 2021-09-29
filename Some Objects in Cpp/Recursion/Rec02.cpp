#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
// =>> Dua vao cong thuc tong quat cua day fibonaci
int main() {
// Vi du : Hien thi 10 so dau tien trong day so fibonaci 
	for(int i=0;i<10;i++) {
		cout<<fibonacci(i)<<" ";
	}
	return 0;
}

