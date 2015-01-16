#include <iostream>

int my_strlen(char* str){
	int i = 0;
	while(*(str+i)!='\0'){
		i++;
	}
	printf("The length of %s is %d.\n", str, i);
	return i;
}

int main(){
	char* str1 = "yuzu";
	char* str2 = "yuzuo";

	my_strlen(str1);
	my_strlen(str2);

}