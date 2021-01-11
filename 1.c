#include <stdio.h>
int main () {
	int t[50] , M[2],n ,i,j,x ;
	
	printf("donner x: " ) ;
	scanf("%d" , &x ) ;
	printf("donner le taille du tableau : " ) ;
	scanf("%d" , &n ) ;
	 for (i=0; i<n; i++)
	 {
         printf("Element[%d] : ",i);
         scanf("%d", &t[i]);
        }
    for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (t[i]+t[j]==x){
			  M[0]=j;
			  M[1]=i;
			  }}
		}
	for (i=0;i<2;i++)
    {
	printf("%d \t",M[i]);
	 
	}
return 0;
}		
