#include <stdio.h>
int main () {
    int t[50],n,i,j,result ;
    printf("donner le taille du tableau : " ) ;
	scanf("%d" , &n ) ;
	for (i=0; i<n; i++)
	 {
         printf("Element[%d] : ",i);
         scanf("%d", &t[i]);
        }
    for (i=0;i<n;i++)
    {
	printf("%d \t",t[i]);
	 }
	j=0;
	result=0;
	for (i=n;i>n/2;i--){
	   if (t[j]==t[i]){
	      j++;
	      result ++;}
	 }
	if (result == n/2) 
	  printf("  vrai ");
	else 
	  printf(" faux ");    
	   
return 0;
}	       
	     
	 
