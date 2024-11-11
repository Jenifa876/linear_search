#include<iostream>
using namespace std;
int lin_search(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[10],n,key;
    cout<<"Enter the no of elements:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the key value to search:";
    cin>>key;
    int result=lin_search(a,n,key);
    if(result!=-1)
    {
        cout<<"\nElement is found at the position:"<<result+1;
    }
    else
    {
        cout<<"\nElement is not found";
    }
}
