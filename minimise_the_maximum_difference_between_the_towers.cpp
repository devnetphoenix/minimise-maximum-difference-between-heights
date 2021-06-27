#include<iostream>
using namespace std;
int minimise_heights(int a[], int n, int k);

int minimise_heights(int a[], int n, int k)
{
    for(int i = 0; i<n; i++)
    {
        if(a[i]<10)
            a[i] = a[i] + k;
        else{
            a[i] = a[i] - k;
        }
    }

    int curr_diff = 0;
    int reg_diff = 0;

    for(int q = 0; q<n; q++)
    {
        for(int i = 0; i<n; i++)
        {
           {
               if(a[i]>a[q])
            reg_diff = a[i]- a[q];
           else
            reg_diff = a[q]- a[i];
           }
           {
               if(reg_diff > curr_diff)
               curr_diff = reg_diff;
           }

        }
    }
    return curr_diff;
}
int main()
{
    int a[10],n,k;
    cout<<"enter the number of element in array : ";
    cin>>n;
    cout<<"enter the value of k : ";
    cin>>k;
    cout<<"the array of original heights : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    int result = minimise_heights(a,n,k);
    cout<<" the required maximum difference is : "<<result;
    return 0; 
}