#include<stdio.h>
main()
{
	int a[30];
	int n,i;
	printf("enter count array size  :");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("enter countarray  :");
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++){
		printf("  %d",i);
	}
}
