#include <iostream>
#include <string>

using namespace std;
#define NALPHA 26

void occurrence_calc(string word);

int main() {
	string word = "aabbcdeff";
	occurrence_calc(word);
}

void occurrence_calc(string word) {
	int result[NALPHA];
	for (int i = 0; i < NALPHA; ++i) {
		result[i] = 0;
	}
	for (int i = 0; i < word.length(); ++i) {
		result[word[i]-'a']++;
	}
	for (int i = 0; i < NALPHA; ++i) {
		printf("%c : %d\n", i+'a', result[i]);
	}
}

	
