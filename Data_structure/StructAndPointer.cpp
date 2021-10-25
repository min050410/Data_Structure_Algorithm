#include<stdio.h>
#include<string.h>

typedef struct Person{
	char name[10];
	int age;
	
}PERSON;

void inputData( PERSON *p);
void outputData( PERSON *p);

int main(){
	PERSON p;
	
	inputData( &p );
	outputData( &p );	

	return 0;
	
}
void inputData( PERSON *p){
	scanf("%s" , p -> name);
	scanf("%d", &(p -> age));
}
void outputData( PERSON *p) {
	printf("%s, %d\n", p-> name, p->
}
