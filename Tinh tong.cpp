#include <stdio.h>
int main(){
	int n;
	printf("Nhap so so muon tinh tong n =");
	scanf("%d",&n);
	int x = 1;
	int S = 0;
	while(x<=n){
	S+=x;
	x++;
	}
	printf("Tong cua %d so la: %d",n,S);
}