/*Using Pointers to access arraays */
#include <stdio.h>

	int main() {
		int a[5];
		int i;
		for(i = 0; i< 5; i++) {
			a[i] = i;
			}
		int *b;
		b = a;
		for(i = 0; i < 5; i++) {
		printf("The value in array %d and address is %16lu\n", *b,b);
		b = b+2;
		}
	}
