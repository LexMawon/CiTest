#include <stdio.h>

int main()
{
int a[6]={1,5,3,8,0,2}; 
for (int i = 0; i < 6; i++)  
for (int j = 6; j > i; j--){
    if (a[j - 1] > a[j]) {
        int temp = a[j - 1]; 
        a[j - 1] = a[j];
        a[j] = temp;
             
    }
  }
  
  for (int i = 0; i<6; i++)
  printf("%d ", a[i]);
  return 0;
}
