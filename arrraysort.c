#include <stdio.h>

int main()
{
int a[6]={1,5,3,8,0,2}; 
int f[6];
for (int i = 0; i < 6; i++) 
for (int j = 6; j > i; j--){
    if (a[j - 1] > a[j]) {
        int temp = a[j - 1]; 
        a[j - 1] = a[j];
        a[j] = temp;
      }
   }
for (int i = 0; i<6; i++){
		//if (a[i]>0){
		f[i]=a[i];
	printf("%d ", f[i]);
}
  return 0;
}
