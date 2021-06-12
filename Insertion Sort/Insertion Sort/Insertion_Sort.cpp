 #include<stdio.h>

int main(){

	int i,j,n,temp,a[100];

	printf("Enter the number of elements: ");
	scanf("%d",&n);

	printf("Enter the elements: ");
	for(i=0; i<n; i++){

		scanf("%d",&a[i]);
	}

	for(i=0; i<n; i++){

		j=i;

	    /*Ascending order: a[j]<a[j-1]
		 Descending order: a[j]>a[j-1]*/

		while(j>0 && a[j]<a[j-1]){

			temp= a[j];
			a[j]= a[j-1];
			a[j-1]= temp;

			j--;
		}
	}

	printf("After sorting in Ascending order: ");

	for(i=0; i<n; i++){

		printf("%d ",a[i]);
	}

	getchar();
	getchar();
	return 0;
}
