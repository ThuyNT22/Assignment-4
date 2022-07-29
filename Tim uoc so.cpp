#include <stdio.h>
int main(){
	int n;
	printf("Vui long nhap so nguyen n = ");
	scanf("%d",&n);
	int i=1;
	while(i<=n){
	if(n%i==0){
		printf("%d la uoc so cua n\n",i);
	}
	i++;
	}
}