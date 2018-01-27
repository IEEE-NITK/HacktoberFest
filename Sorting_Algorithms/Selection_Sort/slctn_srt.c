#include<stdio.h>

void main() {
	int i,j,a[10],n,val,min;
	printf("Enter the how mny nos......\n");
	scanf("%d",&n);

	printf("Enter the element .......\n");
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]);

	for(i=0;i<n;i++) {
		for(j=i+1;j<n;j++) {
			if(a[i]>a[j]) {
				val = a[i];
				a[i] = a[j];
				a[j] = val;
			}
		}
	}
	

	printf("sorted elements are.......\n");
	for(i=0;i<n;i++)  
		printf("%d ",a[i]);
	printf("\n");

}
