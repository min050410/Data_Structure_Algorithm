#include<stdio.h>
int main(){
	int f,l;
	int sum =0;
	scanf("%d %d",&f ,&l);
	for(int i = f; i<=l; i++)
	{	
		if (i==l){
			printf("%d =",i);
		}
		else{
		printf("%d + ", i);
		
		}
		sum += i;
	}
	printf(" %d", sum);
}
