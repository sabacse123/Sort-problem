#include<stdio.h>

int main()
{
    int i,j,n,swap;
    int *ptr[100];

    printf("Please Enter The array size: ");
    scanf("%d",&n);

    printf("Please Enter Array Element: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",(ptr+i));
    }

    ///sorting part
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {

            if(*(ptr+j)>*(ptr+j+1))
            {
                swap=*(ptr+j);
                *(ptr+j)=*(ptr+j+1) ;
                *(ptr+j+1)=swap;
            }
        }
    }

    printf("Your Sorted array: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n");

    return 0;
}
