#include<stdio.h>
#include<stdlib.h>

int main (){
	int a[100],i,j;
	int n,temp;

	printf("Enter the size of Array: ");
	scanf("%d",&n);

	printf("Enter %d elements in Array: \n",n);
	for(i=0; i<n; i++){
		a[i]= rand()%100;
	}

	printf("Before sorting: ");
	for(i=0; i<n; i++){
		printf(" %d",a[i]);
	}

	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			if(a[i] < a[j]){ //for descending order: if(a[i] > a[j]);
				temp= a[i];
				a[i]= a[j];
				a[j]= temp;
			}
		}
	}

	printf("\nAfter sorting: ");
	for(i=0; i<n; i++){
		printf(" %d",a[i]);
	}

	getchar ();
	getchar ();
	return 0;
}
