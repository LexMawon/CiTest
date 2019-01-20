#include<stdio.h>
// Клинорование массива

int main() {
	
int b[6]={3,3,6,8,4,1};
int p[6];

for(int i=0;i<6;i++) {
	if(b[i]!=0) {
		p[i]=b[i];
        }
   }
for(int i=0;i<6;i++)
    printf( "%d ",p[i]);

return 0;
}
