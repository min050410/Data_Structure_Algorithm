// Singly linked list Progrem

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct ListNode{
	char data[4];  
	struct ListNode* link;  
} listNode;  //listNode

typedef struct {
	listNode* head;
} linkedList_h;  //linkedList_h 

// function
linkedList_h* createLinkedList_h(void){
	linkedList_h* L;
	L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L -> head = NULL;
	return L;
}

void insertFirstNode(linkedList_h *L, char *x){
	ListNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode -> data, x);
	newNode -> link = L -> head; // 먼저 newNode가 head를 가리키도록 설정 
	L -> head = newNode; // newNode 는 ListNode의 포인터 변수 이기 때문에 L->head 는 newNode를 가리키게 된다.  
}

void insertMiddleNode(linkedList_h *L,listNode *pre, char *x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode -> data, x);
	
	if ( L == NULL){
		newNode -> link = NULL; //newNode의 link를 NULL으로 설정하고 
		L -> head = newNode; //L은 newNode를 가리킴 
	}
	else if (pre == NULL){
		L -> head = newNode;
	}
	else{
		newNode -> link = pre -> link;  
		pre -> link = newNode; // pre 뒤에 newNode가 들어가고 newNode는 원래 pre가 가리키던값을 가리킴 
	}
	
}

void insertLastNode(linkedList_h* L, char* L){
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode))
	
}









// main
int main(){
	linkedList_h* L; //L은 맨 처음부터 실행되어 있어서 insertMiddleNode의 if문이 돌아감 
	L = createLinkedList_h();  
	printf("(1)공백리스트 생성하기");
	printList(L); getchar();
	
	printf("(2)리스트에 [수] 노드 삽입하기");
	insertFirstNode(L, "수");
	printList(L); getchar();
	
	printf("(3)리스트 마지막에 [금] 노드 삽입하기");
	insertLastNode(L,"금");
	printList(L); getchar();
	
	printf("(4)리스트 첫 번째에 [월] 노드 삽입하기");
	insertFirstNode(L, "월");
	printList(L); getchar();
	
	printf("(5)리스트 공간을 해제하여 공백 리스트로 만들기");
	freeLinkedList_h(L);
	printList(L);
	
	getchar();
	
	return 0; 
}
	 
	
} 


