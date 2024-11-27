#include<stdio.h>
int main(){
int K[5] = {1, 2, 3, 4, 5};
int length = sizeof(K) / sizeof(K[0]);
for (int i = 0; i < length; i++){
printf("K[%d] = %d\n", i, K[i]);
}
printf("do dai cua mang : %d", length);
return 0;
}
