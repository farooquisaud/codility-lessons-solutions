#include<stdio.h>

int solution(int *A,int N){
	
	int missing = 0;
	for(int i = 0, j = 1; i < N; i++,j++)
		missing^=j^A[i];
	return missing^(N+1);
}

