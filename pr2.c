#include<stdio.h>
main(){
	int i,j,k=11;
	
	for(i=1;i<=5;i++){
		for(j=i;j>=1;j--){
			printf("%d ",k);
			k++;
		} 
		printf("\n");
	}
}
