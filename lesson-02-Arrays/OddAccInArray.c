#include<stdio.h>

int solution(int *A, int N){
	int result=0;
	for(int i = 0; i < N; i++){
		result^=A[i];
	} 
	return result;
}

void main(void){
	int A[] = {9,3,9,3,9,7,9};
	printf("%d\n",solution(A,7));
}
