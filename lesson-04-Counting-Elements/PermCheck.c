#include<stdio.h>
#include<stdlib.h>
int solution1(int *A, int N){

	int perm = 0;
	for(int i  = 0; i < N;i++)
		perm^=(i+1)^A[i];
	return (perm == 0? 1:0);
}

int solution2(int *A,int N){
	int *Arr = (int*)calloc(N,sizeof(int));
	for(int i = 0; i < N; i++){
		if(A[i] > N)
			return 0;
		Arr[A[i] - 1]+=1;
		}
	for(int i = 0; i < N; i++){
		if(Arr[i] > 1)
			return 0;
		}
	return 1;
}
void main(void){

int A[] = {2,3,1,4};
if(solution2(A,2))
	printf("Permutation Array\n");
else
	printf("Not a Permutation Array");
}
