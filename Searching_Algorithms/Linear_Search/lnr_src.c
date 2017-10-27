#include<stdio.h>

void main() {
	int i,j,a[10],n,src,flg=1;
	printf("Enter the how mny nos......\n");
	scanf("%d",&n);

	printf("Enter the element .......\n");
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]);
	printf("Enter the searching element......\n");
	scanf("%d",&src);
	
	for(i=0;i<n;i++)   {
		if(a[i] == src) {
			printf("%d is in %d position\n",src,i+1);
			flg = 0;
		}		
	}
	if(flg)
		printf("Not found");

	printf("\n");

}
