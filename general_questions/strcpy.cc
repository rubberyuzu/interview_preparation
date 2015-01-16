#include <iostream>

void my_strcpy(char* str1, char* str2){
	int i = 0;
	while(*(str1+i) != '\0'){
		str2[i] = str1[i];
		i++;
	}
}

int main(){
	char* str1 = "yuzu";
	char* str2;
	my_strcpy(str1, str2);
	printf("%s\n", str2);
}