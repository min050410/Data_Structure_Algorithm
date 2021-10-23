#include <stdio.h>
int main(){
    
	int i,j,n=4,k,temp;
    int list[4]={4,5,1,2};
    // 코드 작성 
	for(i = 0; i < n-1; i++)
	{
		k = i;
		for( j = i+1; j < n; j++){
			if(list[j]<list[k])
			{
				k = j;	
		 }
			
		}
		if(list[k]!=list[i]){
		
			temp = list[i];
			list[i] = list[k];
			list[k] = temp;
	
			}	
		
	} 
	
	for(i=0; i<n; i++)
    {
        printf("%d ",list[i]);
    }
    return 0;
}

