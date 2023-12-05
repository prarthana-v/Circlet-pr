/*
A
B 1 
C 2 D
E 3 F 4
G 5 H 6 I
*/
#include<stdio.h>
main(){
	int i,j,k,l;
	int a=1;
	char b='A';
	
	for(i=1;i<=5;i++){
				
		for(j=i;j>=1;j--){
			if(i%2==0){
				if(j%2==1){
				printf("%d",a);
				a++;
				}
				else{
				printf("%c",b);
				b++;
			    }
			}
			else{
				if(j%2==0){
				printf("%d",a);
				a++;
				}
				else{
				printf("%c",b);
				b++;
			    }
			}
			}
		printf("\n");	        
		}
		
		
	}	
	

