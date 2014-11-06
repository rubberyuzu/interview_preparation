#include <iostream>
#include <algorithm>
#include <stdlib.h>  

using namespace std;

double median(int arr[], int n);

void merge_median(int arr1[], int arr2[], int n){
	double median_1 = median(arr1, n);
	double median_2 = median(arr2, n);
	printf("median_1 :%f\nmedian_2 :%f\n",median_1, median_2);
	if(n==1){
		printf("%result: %f \n", (double)(median_1+median_2)/(double)2);
	}else if(n==2){
		printf("%result: %f \n", (double)(max(arr1[0], arr2[0]) + min(arr1[1], arr2[1])) /(double)2);
	}	else if(median_1 == median_2){
		printf("printing the median_1 %f \n", median_1);
	}else if(median_1 >= median_2){
		if (n%2 == 0){
			merge_median(arr1, arr2+n/2, n/2);
		}else{
			merge_median(arr1, arr2+n/2, n/2+1);
		}
	}else{
		if (n%2 == 0){
			merge_median(arr1+n/2, arr2,n/2);
		}else{
			merge_median(arr1+n/2, arr2, n/2+1);
		}
	}
}

double median(int arr[], int n){
	if(n%2 == 1){
		return arr[n/2];
	}else{
		return (double)(arr[n/2]+arr[n/2-1])/(double)2;
	}
}


int main(){
	printf("%s\n","started" );
	int arr1[6] = {1,2,3,4,5,6};
	int arr2[6] = {3,4,5,6,7,8};
	merge_median(arr1, arr2, 6);
}