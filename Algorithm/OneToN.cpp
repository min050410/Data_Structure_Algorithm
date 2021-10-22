#include<stdio.h>
void OnetoN(int a, int b){
	int sum =0;
	for(int i=0;i<=a;i+=b){
		sum +=i;
	}
	printf("%d", sum);
}
int main(){
	int a ,b ;
	scanf("%d %d",&a,&b);
	OnetoN(a,b);
}
