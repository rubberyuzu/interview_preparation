#include <iostream>
#include <vector>
using namespace std;

int merge_median(int arr1[], int arr2[], int n){
	vector<int> merged;

	int count1 = 0;
	int count2 = 0;
	int sum_index = 0;

	while(sum_index<n){
		if(arr1[count1]<=arr2[count2]){
			merged.push_back(arr1[count1]);
			count1++;
		}else{
			merged.push_back(arr2[count2]);
			count2++;
		}
		sum_index = sum_index+1;
	}
	return merged[n-1];
}

int main(){
	int arr1[6] = {1,2,3,4,5,6};
	int arr2[6] = {3,4,5,6,7,8};
	int result = merge_median(arr1, arr2, 6);
	printf("median : %d\n", result);
}