#include<stdio.h>

void main() {
	int i,a[10],n,src,flg=1,lb,ub,mid;
	printf("Enter the how mny nos......\n");
	scanf("%d",&n);

	printf("Enter the element in sorted order .......\n");
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]);
	printf("Enter the searching element......\n");
	scanf("%d",&src);
	lb = 0;
	ub = n-1;
	while(lb <= ub) {
		mid=(lb+ub)/2;
		if(a[mid] == src) {
			printf("%d is in %d position\n",src,mid+1);
			flg = 0;
			break;
		}
		else if(src<a[mid])
			ub = mid-1;
		else
			lb = mid +1;
	}
	
	
	if(flg)
		printf("Not found");

	printf("\n");

}
