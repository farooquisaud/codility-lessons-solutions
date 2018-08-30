/*
An array A consisting of N integers is given. Rotation of the array means that each element is shifted right by one index, and the last element of the array is moved to the first place. For example, the rotation of array A = [3, 8, 9, 7, 6] is [6, 3, 8, 9, 7] (elements are shifted right by one index and 6 is moved to the first place).

The goal is to rotate array A K times; that is, each element of A will be shifted to the right K times.

Assume that the following declarations are given:

    struct Results {
      int * A;
      int N; // Length of the array
    };

Write a function:

    struct Results solution(int A[], int N, int K);

that, given an array A consisting of N integers and an integer K, returns the array A rotated K times.*/


#include<stdio.h>
#include<stdlib.h>
struct Results {
	int *A;
	int N;
	};

struct Results solution(int A[], int N, int K){
	struct Results result;
	if(N < 1){
		printf("Invalid array\n");
		return result;
		}
	else if(N == 1 || K == N || K == 0){
		result.A = A;
		result.N = N;
		}

	else{
		int shift = K%N;
		printf("shift = %d\n",shift);
		result.A = (int*)malloc(sizeof(int)*N);
		if(result.A == NULL){
			printf("Fatal: malloc failed\n");
			return result;
			}
		result.N = N;
		for(int i = 0; i < shift; i++)
			result.A[shift-1-i] = A[N-1-i];
		for(int i = 0; i < (N-shift); i++)
			result.A[shift + i] = A[i];
	}

	return result;
		
}

void main(void){
int A[] = {1,2,3,4,5,6,7};
struct Results result = solution(A, 7, 100);
for(int i = 0; i < 7; i++)
	printf("%d ",result.A[i]);
}				
		
