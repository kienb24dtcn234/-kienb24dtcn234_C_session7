#include<stdio.h>
int main(){
int n, k[5];
printf("Nhap n :");
scanf("%d", &n);
for(int i = 0; i < n; i++){
	printf("nhap k[%d] : ", i);
	scanf("%d", &k[i]);
}
printf("Mang vua nhap :");
for (int i = 0; i < n; i++) {
	        printf("%d , ", k[i]);
}
return 0; 
}

