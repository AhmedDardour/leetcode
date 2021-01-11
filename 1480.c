#include <stdio.h>
int main () {
	int t[50] ,n ,i ;
	
	printf("donner le taille du tableau : " ) ;
	scanf("%d" , &n ) ;
	 for (i=0; i<n; i++)
	 {
         printf("Element[%d] : ",i);
         scanf("%d", &t[i]);
        }

	for (i=0;i<n-1;i++){
      if (n==0) {
          return t[0];
            }
      else {
          t[i+1]=t[i]+t[i+1];
          
          }
  }
	
	for (i=0;i<n;i++)
    {
	printf("%d \t",t[i]);
	 
	}
		
	return 0;
}
