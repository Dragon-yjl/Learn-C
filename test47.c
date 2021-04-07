//#include<stdio.h>
//#define or ||
//#define 整型 int
//
//int main() {
//	 整型 i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i=a++&&++b&&c++&&d++;
//	//i = a++ || ++b || c++ || d++;
//	i = a++ or b++ or ++c or d++;
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);
//	return 0;
//}

#include<stdio.h>
void hanoi(int n, char x, char y, char z);
void move(char x, int n, char y);
main() {
	hanoi(4, 'a', 'b', 'c');
}
void hanoi(int n, char x, char y, char z) {
	if (n == 1) {
		move(x, 1, z);
	}else {
		hanoi(n - 1, x, z, y);
		move(x, n, z);
		hanoi(n - 1, y, x, z);
	}
}
void move(char x, int n, char y) {
	printf("%c->%c\n", x, y);
}