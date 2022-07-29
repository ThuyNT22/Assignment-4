#include <stdio.h>
int main(){
	int n;
	printf("Vui long nhap so nguyen n = ");
	scanf("%d",&n);
	int res=0;
	while(n>0){
	int k=n%10;
	res = res*10+k;
	n=n/10;
	}
	printf("So dao nguoc la %d",res);
}