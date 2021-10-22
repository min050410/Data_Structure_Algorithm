#include<stdio.h>
void f(int a){
	if(a==0){
		return;	
	}
	else{
		f(a/2);
		printf("%d",a%2);
	}
}
int main(){
	int a;
	scanf("%d", &a);
	
	f(a);
	return 0;
}
