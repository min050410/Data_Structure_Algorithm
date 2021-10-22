#include<stdio.h>
void inputArray( int a[][4], int row );
int totArray( int *a, int size); // 여기에 주목

int main(){
	int score[3][4];
	int i, j;
	int tot;
	double avg;
	
	printf("학생 3명, 각각 네 과목의 점수를 입력하세요\n");
	
	inputArray( score, 3 );
	
	for( i = 0 ; i < 3 ; i++){
		tot = totArray( score[i] , 4); //1차원 배열으로 값을줌 
		avg = tot/4;
		printf("총점 : %.d, 평균 : %.2lf\n", tot, avg);
		
	}
	return 0;
	
}

void inputArray( int a[][4], int row){
	int i, j;
	for( i=0; i< row;i++)
		for( j=0; j<4; j++)
			scanf("%d", &a[i][j]);
}

void totArray( int *a, int size) { // 1차원 배열로 받아서 a[]로 쓰면
	// 부분배열 가능   
	int i, tot = 0;
	for ( i=0; i< size; i++)
		tot += a[i];
	return tot;
}



 
