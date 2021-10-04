#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int b[n];
    for(int i=0; i<n; i++)
        cin>>b[i];
    int res=0;
    for(int i=1; i<=1000; i++)
    {
        int flag=1;
        for(int j=0; j<n; j++)
        {
            if(i<a[j]||i>b[j])
                flag=0;
        }
        if(flag)
            res++;
    }

    cout<<res<<endl;
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int brr[n];
    for(int i=0; i<n; i++)
        cin>>brr[i];

    int narr[100]; //new_array
    for(int i=0; i<n; i++)
    {
        for(int j=arr[i]; j<=brr[i]; j++)
        {
            narr[i]=i;

        }
        cout << narr[i] << " ";
    }
    return 0;
}*/

