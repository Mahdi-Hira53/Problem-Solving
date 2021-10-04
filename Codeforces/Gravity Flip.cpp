#include<bits/stdc++.h>
using namespace std;
void bubblesort(int n,int a[])
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                // count++;
            }
        }
    }
    //cout<<"Array is sorted in "<<count<<" swaps."<<endl;


}
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0; i<n; i++)
        cin>>a[i];
    bubblesort(n,a);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" "<<endl;
    //cout<<"First Element: "<<a[0]<<endl;
    //cout<<"Last Element: "<<a[n-1]<<endl;


}
