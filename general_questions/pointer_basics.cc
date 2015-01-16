#include <iostream>

int main(){
	int x = 1;
	int* a; // a is a pointer(address) to int
	a = &x;
	printf("%d\n", *a);

	char *firstname = "Yoshihiro";
  char lastname[9] = "Kawahara";
  printf("Name: %s %s\n", firstname, lastname);

  char middlename[] = "oil";
  printf("%s\n", middlename);

}