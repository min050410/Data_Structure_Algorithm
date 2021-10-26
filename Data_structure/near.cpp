#include<stdio.h>
#include<math.h>
#define N 5

typedef struct point{
	int x,  y;
}POINT;  // struct 그리고 x, y 

void inputPoint( POINT *p);
void outputPoint( POINT *p);
double distance( POINT *p, POINT *q);
int main(){

POINT p[5];   
POINT origin = {0, 0};
int i;
int min=0; //min 은 0 

for(i=0;i<N;i++)  // n은 5 
	inputPoint(p+i); //배열 주소를 넘겨줌  
for(i=0;i<N;i++) 
	outputPoint(p+i); //배열 주소를 넘겨줌 22 
for(i=1;i<N;i++){
	if(distance(&origin, p+min) >= distance(&origin, p+i)) //origin의 주소값을 넘겨줌 
	// { 0, 0 } 과 p+ min과의 거리  
		if((p[min].x+p[min].y) > (p[i].x + p[i].y))
			min = i;
}
printf("원점에서 가장 가까운 좌표 :");
outputPoint(p+min);

return 0;

}

void inputPoint(POINT *p){
	printf("x y 좌표 입력 : ");
	scanf("%d %d", &p->x, &p->y);
}

void outputPoint(POINT *p) {
	printf("(%4d, %4d)\n",p->x,p->y);
}
double distance( POINT *p, POINT *q){
	
	return sqrt(pow((q->x-p->x),2)+pow((q->y-p->y),2));
	// p->x 0
	// p->y 0 
}
			
	
