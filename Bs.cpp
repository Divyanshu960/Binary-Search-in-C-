#include <stdio.h>
void bs(int,int,int,int)//function prototype declared
int main()
{   
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter an element to be searched");
    int tar;
    scanf("%d",&tar);
    bs(arr , 0 , n-1 ,tar);
    
    return 0;
}
void bs(int arr[], int l , int h, int tar)
{   int mid;
    if(h==-1)//checks if array size is out of bound
    {
        printf("Invalid Size");
    }
    else
    {
        if(l>h)//compares low and high in the search
        {
            printf("Element not found");
        }
        else{
            mid = (l+h)/2;
            if(arr[mid] == tar)//checks if element found at middle
            {
                printf("Element found at position : %d",mid);
            }
            else if(tar > arr[mid])
            {
                bs(arr, mid+1 , h , tar);
            }
            else 
            {
                bs(arr, l , mid-1,tar);
            }
        }
    }
}
