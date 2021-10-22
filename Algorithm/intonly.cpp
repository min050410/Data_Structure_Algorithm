#include<stdio.h>
#include<string.h>
void yaksoo(int a){
	int count = 0;
	for(int i=1; i<=a; i++){
		if(a%i==0){
			count++;
		}
	}
	printf("%d", count);
}



int main(){
	
char str[51];
int count =0;
scanf("%s", str);
for ( int i =0; str[i]!='\0'; i++){
	if('0'<=str[i]&&str[i]<='9'){
		str[i] = str[i] - '0';
		count = count + str[i];
		count = count * 10;	
	}
}
count=count/10;
printf("%d\n", count);
yaksoo(count);
return 0;
}

