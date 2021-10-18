#include<stdio.h>
int main() {
//	char s3[] = { 'A', 'B', 'C' };
//	char s4[] = {'A', 'B', 'C', '\0'};
//	printf("%d", s3);
//	return 0;
// 예제1
  char alpha[6] = { 'H', 'E', 'L', 'L', 'O', '!'} ;
  char c;
  int i;

  printf("찾고 싶은 문자 : ");

  scanf("%c", &c);

  for(i = 0 ; i < sizeof(alpha)/sizeof(int) ; i ++ )
	  if( alpha[ i ]  == c ){
       printf("%d번째\n", i+1 ) ;
    }
}
