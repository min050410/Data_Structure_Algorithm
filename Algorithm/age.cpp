#include<stdio.h>
int main(){
	int n, i , a[]={} , max = -1, min=101;
	scanf("%d", &n);
	for(i=1;i<=n; i++){
		scanf("%d", &a[i]);
		if(a[i]>max) max = a[i];
		if(a[i]<min) min = a[i];
	}
	printf("%d", max - min);
	return 0;
	
}
