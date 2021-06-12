#include<iostream>
using namespace std;

int main()
{
    int a[100],i,j,n;

    cout<<"Enter the number of elements:"<<endl;
    cin>>n;

    cout<<"Enter the elements"<<endl;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        j=i;

        while(j>0 && a[j]>a[j-1])
        {
            swap(a[j],a[j-1]);
            j--;
        }
    }

    cout<<"After sorting in Descending oder:";

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
