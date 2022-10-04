#include <iostream>
using namespace std;
#define MAX 20
int main()
{
    int a[MAX],n,i,j,c;
    cout<<"Enter the number of elements you want: ";
    cin>>n;
    cout<<"The entered elements are: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int isSorted=0;
    for(i=0;i<n-1;i++)    
    {
        isSorted=1;
        for(j=0;j<n-i-1;j++)    
        {
            if(a[j]>a[j+1])
            {
               c=a[j];
               a[j]=a[j+1];
               a[j+1]=c;
               isSorted=0;
            }
        }
        if(isSorted)
        break;
    }
        cout<<"The sorted elements are: ";
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<' ';
        }
        return 0;
    }