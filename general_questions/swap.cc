#include <iostream>

void swap_chs(char* a, char* b){
	char temp = *a; // temp .. the content of a
	*a = *b;
	*b = temp;
}

int main(){
	char a = 'y';
	char b = 'z';
	printf("%c, %c\n", a, b);
	swap_chs(&a, &b);
	printf("%c, %c\n", a, b);
	return 0;
}