#include<stdio.h>


typedef struct Person{ //typedef 지정 안할 시에는 
	char name[10];
	int age;
	
}PERSON;

void inputData( PERSON *p);
void outputData( PERSON *p);

int main(){
	PERSON p; // typedef 지정 안하면 struct Person p; 이렇게 해야함 
	
	inputData( &p ); //구조체 p 의 주소값을 넘겨줌  
	outputData( &p );	

	return 0;
	
}
void inputData( PERSON *p){
	scanf("%s" , p -> name);  // p->name은 배열이름이기 때문에 &안해도 상관X 
	scanf("%d", &(p -> age));
}
void outputData( PERSON *p) {
	printf("%s, %d\n", p-> name, p->age);
}
