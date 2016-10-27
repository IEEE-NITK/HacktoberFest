#include<stdio.h>

void main() {
	int i,j,a[10],n,val;
	printf("Enter the how mny nos......\n");
	scanf("%d",&n);

	printf("Enter the element .......\n");
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]);

	for(i=0;i<n;i++) {
		for(j=0;j<n-1-i;j++) {
			if(a[j]>a[j+1]) {
				val = a[j];
				a[j] = a[j+1];
				a[j+1] = val;
			}
		}
	}

	printf("sorted elements are.......\n");
	for(i=0;i<n;i++)  
		printf("%d ",a[i]);
	printf("\n");

}
