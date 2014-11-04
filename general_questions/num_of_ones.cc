#include <iostream>
using namespace std;

void count_ones(int n);

int main(){
	count_ones(1);
	count_ones(100);
	count_ones(111);
	count_ones(11111991);
}

void count_ones(int n){
	int current = n;
	int count = 0;
	while(current>0){
		if(current%10 ==1){
			count++;
		}
		current = (current - (current%10))/10;
	}
	printf("%10d : %d\n",n, count );
}