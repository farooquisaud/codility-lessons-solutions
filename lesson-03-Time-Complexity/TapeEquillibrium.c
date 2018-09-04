#include<stdio.h>
#include<stdlib.h>
int solution(int *A, int N){
	int sum = 0;
	int mindiff = 0;
	int tape = 0;
	int diff = 0;

	for(int i = 1; i < N;i++)
		sum+=A[i];

	tape = A[0];

	mindiff = abs(tape - sum);

	for(int i = 1;i < N-1;i++){
		sum-=A[i];

		tape+=A[i];

		diff = abs(tape -sum);

		if(diff < mindiff)
			mindiff = diff;

		}

	return mindiff;
}

void main(void){
	int A[] = {3,1,2,4,3,6,3,10,-1000};
	printf("%d\n",solution(A,9));
}
