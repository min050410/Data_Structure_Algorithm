#include <stdio.h>
void inputArray( int a[], int size);
void outputArray( int a[], int size);
int insertArray( int a[], int num, int index, int size);
int deleteArray( int a[], int index, int size);

int main(){
  int a[10], size=0 ;
	int num, index, c;
	while(1){
	printf("-----------------------------------------\n");
	printf("1. 배열 생성, 2. 배열 출력, 3. 배열 넣기, 4.배열 요소 삭제, 5.프로그램 종료\n");
	scanf("%d", &c);
	switch(c) {
    case 1: inputArray(a, size);
        break;
    case 2: outputArray(a,size);
        break;
    case 3: printf("1. 넣을 배열의 값을 입력하세요:");
		scanf("%d",&num);
		printf("2. 넣을 배열의 위치를 입력하세요(기본값 -> 0):");
		scanf("%d",&index);
		size = insertArray(a, num, index, size);
        break;
	case 4: printf("삭제할 배열의 위치를 입력하세요(기본값 -> 0):");
		scanf("%d",&index);
		size = deleteArray(a, index, size);
        break;
	default: printf("프로그램 종료합니다.\n");
	}
		if (c==5){
			break;
		}
	}
	printf("-----------------------------------------\n");
  return 0;
}
void inputArray( int a[], int size){
    int i;
    for( i = 0 ; i < size ; i++ ){
        scanf( "%d", &a[i] ) ;
    }
}
void outputArray( int a[], int size){
    int i;
    for( i = 0; i < size ; i ++ ){  
			printf("%d ", a[i] ); 
    }
    printf("\n");
}
int insertArray( int a[], int num, int index, int size){
    if( index == size ){
        a[index] = num;
        size ++;
    } 
	else{    // 여기에 배열 중간에 원소 삽입 코드
		int i;
		for(i=size-1;i>=index;i--){
				a[i+1] = a[i];
		}
			a[index] = num;
			size++;
	}
  return size;
}
int deleteArray( int a[], int index, int size){
  if( index == size-1 ){
        a[index] = 0 ;
        size --;
    }
	else{ //여기에 배열 중간의 원소 삭제 코드
		int i;
		for(i=index+1;i<=size-1;i++)
		{
			a[i-1] = a[i];
		}
		size --;
		
	}
  return size;
}
