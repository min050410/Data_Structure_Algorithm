#include<stdio.h>
int main(){
	int a;
	int sum=0;
	scanf("%d", &a);
	
	for(int i=1; i<=a/2; i++)
	{
		
		if(a%i==0 && a/i!=2){
			printf("%d + ", i);
			sum+=i;
		}
		else if(a%i==0 && a/i==2){
			printf("%d = ", i);
			sum+=i;
		}
	}
	printf("%d",sum);
}
