#include <stdio.h>

int main() {
	char c1, c2, c3, c4, c5, c6;
	int tong;
	
	printf("Nhap vao 6 ki tu: ");
	c1 = getchar();
	c2 = getchar();
	c3 = getchar();
	c4 = getchar();
	c5 = getchar();
	c6 = getchar();
	
	tong = c1 + c2 + c3 + c4 + c5 + c6;
	
	printf("6 ki tu da nhap la: %c %c %c %c %c %c\n", c1, c2, c3, c4, c5, c6);
	printf("Tong 6 ki tu dang so: %d", tong);
	
	return 0;
}