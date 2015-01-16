#include <iostream>
#include <string>

#define NALPHA 26

using namespace std;

void solve(int result[], string str){
	int i;
	for (i = 0; i < NALPHA; ++i){
		result[i] = 0;
	}

	for (i = 0; i < str.length(); ++i){
		result[str[i]-'a']+=1;
	}

	for (i = 0; i < NALPHA; ++i){
		printf("%c => %d times\n", i+'a', result[i]);;
	}

}

int main(){
	int result[NALPHA];
	string str = "aaaiiiuuuuu";

	solve(result, str);

	return 0;
}

