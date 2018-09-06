#include <stdio.h>
#include<stdlib.h>
#define TestBit(A,k) ( A[(k/32)] & (1 << (k%32)) )
#define SetBit(A,k) ( A[(k/32)] |= (1 << (k%32)) )
int solution(int X, int *A, int N){
int dist = 0;
int *bitarr = (int*)calloc(X/32+1,sizeof(int));
printf("X/32+1 = %d\n",N/32+1);
	if(X > N){
		return -1;
	}
	if(N == 1) {
		if(A[0] == X) {
			return 0;
	        } else {
			return -1;
		}
	}
for(int i = 0;i < N; i++){
	if(A[i] <= X && !TestBit(bitarr,A[i])){
		SetBit(bitarr,A[i]);
		++dist;
	}
	if(dist == X)
		return i;
	}
	return -1;
}

void main(void){
	int i = 0;
	int A[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,21};
	if((i = solution(33,A,34) )== -1){
	printf("Frog could not jump\n");
	}
	else{
		printf("Frog can jump with %d jumps\n",i);
	}
}
