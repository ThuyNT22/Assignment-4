#include <stdio.h>
int main(){
	int n;
	printf("Vui long nhap so nguyen n = ");
	scanf("%d",&n);
	int i = 0;
	while(i<n-5){
	i+=6;
	}
	printf("So lon nhat nho hon n chia het cho 2 va 3 la %d",i);
}