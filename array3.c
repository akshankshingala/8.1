#include<stdio.h>

main()
{
 	int a[10],b[10],c[20];
 	int n,i;
 	
 	
 	printf("enter count array size : ");
 	scanf("%d",&n);
 	
 	
 	for(i=0; i<n; i++){
 		 printf("enter array size : [A]:");
  		 scanf("%d",&a[i]);
	 }
  		for(i=0; i<n; i++){
  			printf("enter array size :[B]:");
  			scanf("%d",&b[i]);
 	 }
 		for(i=0; i<n; i++){
  			c[i]=a[i]+b[i];
	 }
 		for(i=0; i<n; i++){
  			printf("C = [%d]\n",c[i]);
	}
	
}
