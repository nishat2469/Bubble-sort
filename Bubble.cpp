#include<bits/stdc++.h>

using namespace std;

void bubble_sort(int arr[], int n)
{

    for(int i=0; i<n; i++)
    {
        int flag=0;
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=1;
            }

        }
        if(flag==0)
            break;
    }



}


int main()
{

    int arr[]= {3, 1, 5, 7, 11};
    int n= sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr, n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
