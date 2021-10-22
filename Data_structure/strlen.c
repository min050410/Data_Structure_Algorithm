#include<stdio.h>
size_t myStrlen(  char *str );
int main(void)
{
	char s[] = "hello world";
	printf("%d\n", myStrlen(s));
	return 0;

}
size_t myStrlen(  char *str){
	char *s; // s 포인터 변수 
	for( s = str; *s; s++ ); //  s도 원래 배열을 참조하도록 변경 
	return s - str; //끝주소 - 시작주소 char size가 1 이라서 가능 
}
