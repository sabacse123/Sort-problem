#include<stdio.h>
#include<stdlib.h>

int main () {
	int a[100],i,j,n;
	int index,temp;

	printf("Enter the size of Array: ");
	scanf("%d",&n);

	printf("Enter %d elements : \n",n);
	for(i=0; i<n; i++){
		a[i] = rand()%100;
	}

	printf("Before sorting: ");
	for(i=0; i<n; i++){
		printf(" %d",a[i]);
	}

	for(i=0; i<n; i++){
		index= i;
		for(j=i+1; j<n; j++){
			if(a[j] < a[index]){ // for descedning order: if(a[j] > a[index]
				index= j;
			}
		}
		if(index!= i){
			temp= a[index];
			a[index]= a[i];
			a[i]= temp;
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
