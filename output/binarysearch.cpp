#include<iostream>
using namespace std;
int search(int arr[],int n, int key)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(key==arr[mid])
        {
            return mid;
    }
    if(key>arr[mid])

    {
        s=mid+1;

    }
    else{
        e=mid-1;
    }
    return -1;

    }

}
int main ()
{
    int arr[5]={1,5,4,7,8};
    int p=search(arr, 5,4);
    if(p!=-1)
    {
        cout<<"key found at "<<p;
        }
        else{
            cout<<"key not found ";
        }
}
