#include<stdio.h>
int solution(int X, int Y, int D){
	int diff = 0;
	if(X == Y)
		return 0;
	diff = Y - X;
	if(diff%D == 0)
		return diff/D;
	else
		return diff/D + 1;
}	  
	
void main(void){
	printf("%d\n",solution(28,95,30));
}
