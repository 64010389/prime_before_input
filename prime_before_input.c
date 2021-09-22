#include<stdio.h>
int main(){
	int num,i,j,m,check;
	printf("Enter Number : " );
	scanf("%d",&num);
	printf("Prime Number : ");
	for(i=2;i<num;i++){
		check=0;
		m=i/2;
		for(j=2;j<=m;j++){
			if(i%j==0){
				check=1;
				break;
			}		
		}
		if(check==0){
			printf("%d ",i);
		}
	}
}