#include<stdio.h>
#include<math.h>
#define N 5

typedef struct point{
	int x,  y;
}POINT;

void inputPoint( POINT *p);
void outputPoint( POINT *p);
double distance( POINT *p, POINT *q);
int main(){

POINT p[5];
POINT origin = {0, 0};
int i;
int min=0;

for(i=0;i<N;i++) 
	inputPoint(p+i);
for(i=0;i<N;i++) 
	outputPoint(p+i);
for(i=1;i<N;i++){
	if(distance(&origin, p+min) >= distance(&origin, p+i))
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
}
			
	
