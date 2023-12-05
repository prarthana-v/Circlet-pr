/*
           *
        *     *
      *         *
    *             *
  *                 *

*/
#include<stdio.h>
main(){
	int i,j,s,k,l;
	for(i=5;i>=1;i--){
		for(s=i;s>1;s--){
			printf("  ");
		}
		for(j=1;j<=1;j++){
			printf("*");
		}
		for(l=i;l<5;l++){
			printf("    ");
		}
		for(k=1;k>=1;k--){
			printf(" *");
		}
		printf("\n");
	}
}
