#include<stdio.h>
void hanoi(int n, char a, char b, char c){
	if(n==1){
		printf("%d:%c->%c\n",n,a,c);
	}
	else{
		hanoi(n-1,a,c,b);
		printf("%d:%c->%c\n",n,a,c);
		hanoi(n-1,b,a,c);
	}
}
int main(){
	int n=3;
	hanoi(n,'A','B','C');
	return 0;
	
}

