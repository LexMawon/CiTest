#include <stdio.h>

int main()
{
int a[6]={1,5,3,8,0,2};
int d[6];
for (int i = 0; i < 6; i++)
for (int j = 6; j > i; j--){
    if (a[j - 1] > a[j]) {
        int temp = a[j - 1];
        a[j - 1] = a[j];
        a[j] = temp;
      }
   }
for (int i = 0; i<6; i++){
		d[i]=a[i+1];
		printf("%d ", d[i]);
	}
  return 0;
}
