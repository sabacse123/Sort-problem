#include<stdio.h>
int main ()
{
    float a[100];
    int i,j,n;
    float temp;

    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%f",&a[i]);
    }

    for(i=0; i<n-1; i++){
        for(j=0; j<n-1; j++){
            if(a[j]<a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("After sorting in descending order: ");
    for(i=0; i<n; i++)
    {
        printf(" %.1f",a[i]);
    }
    return 0;
}
