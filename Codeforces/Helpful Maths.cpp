#include<bits/stdc++.h>
using namespace std;
int main()
{

    char a[100];
    cin>>a;
    int len=strlen(a);



    for (int i = 0; i < len; i+=2)
    {
        for (int j = 0; j < len - 1; j+=2)
        {
            if (a[j] > a[j + 2])
            {
                swap(a[j], a[j + 2]);

            }
        }
    }

    cout<<a<<endl;



}
