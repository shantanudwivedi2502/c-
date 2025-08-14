/*#include<iostream>
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
}*/
//linear search 
/*#include<iostream>
using namespace std;
 int search(int arr[], int n , int key )
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"key found at index "<<i;
        }
    }
    return -1;
}
 int main ()
 {
    int arr[5]={1,4,7,15,6};
    search(arr,5,15);
 }*/
//bubbble sorting 
/*#include<iostream>
using namespace std;
int sort(int arr[], int n )
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}
int main()
{
    int arr[5]={5,4,3,2,1};
    sort(arr,5);
}*/
#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n = 10;
    fibonacci(n);
    return 0;
}
