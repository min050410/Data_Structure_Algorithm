//int * ptr[4]와 int (*ptr)[4]의 차이점

// 전자는 포인터 배열이고 후자는 배열 포인터 이다.  

#include<stdio.h>
int main() {

	int i, arr_len;  

	int num01 = 10, num02 = 20, num03 = 30;
	
	
	int* arr[3] = {&num01, &num02, &num03}; // int형 포인터 배열 선언 
	// char형 배열 포인터 선언 
	
	char (*arr2)[3]; // char 타입의 인덱스를 3개 가지고 있는 배열"을 가리키는 포인터
	// int* a; 와 같은 표현 
	
	
	//포인터 배열  
	arr_len = sizeof(arr)/sizeof(arr[0]);

	for (i = 0; i < arr_len; i++)

	{

    	printf("%d\n", *arr[i]);  //arr[i] 즉 요소를 하나의 포인터 변수로 사용할 수 있다. 
		// arr[i]도 *(arr+i) 이기 때문에 arr+i는 주소를 가리키고 그 주소의 값을 *(*(arr+i))를 이용해 얻는다.  
	}  
	
	// 배열 포인터  
	char tmp1[3] = { 'b', 'l', 'o' };
	arr2 = &tmp1;
	printf("arr의 주소 : %p\t 문자열 : ", arr2);
    for (int i = 0; i < (int)sizeof(*arr2); i++)
    {
        printf("%c", (*arr2)[i]); // =tmp1[i] 
    }
    printf("\n");

}

// 결론 포인터 배열은 배열의 요소가 포인터 변수가 되는 것이고
// 배열 포인터는 배열을 가리키는 포인터 변수를 만드는 것이다.  
// 배열포인터가 더 어렵다 ㅋㅋ; 




