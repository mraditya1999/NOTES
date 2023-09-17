#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned int T,N,R,*arr,i,j;
  scanf("%d",&T);
  
    while(T >= 1 && T <= 100)
  {
        scanf("%d",&N);
        arr = (int*)malloc(N*sizeof(int));
        for(i=0;i<N;i++)
        scanf("%d",(arr+i));
        scanf("%d",&R);
        
    for (i = 0; i < R; i++) {
       int temp = *(arr+0);
       for (j = 0; j < N-1 ; j++)
           *(arr+j) = *(arr + j + 1);
       *(arr+j) = temp;
   }
        for (int i = 0; i < N; i++)
        {
        	printf("%d", *(arr+i));
      		if(i != N-1)
        		printf(" ");
        }
        printf("\n");
    T--;
  }
    return 0;
}