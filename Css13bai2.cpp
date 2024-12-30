#include<stdio.h>
int findUCLN(int a,int b);

int main(){
	int a,b;
	printf("Moi ban nhap gia tri a va b ");
	scanf("%d%d",&a,&b);
	printf("Uoc chung lon nhat la %d",findUCLN(a,b));	
	return 0;
}
int findUCLN(int a,int b){
    while(a!=b){
    	if(a>b){
    		a=a-b;
		}else{
			b=b-a;
		}
	}
	}
