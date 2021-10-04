#include<iostream>
using namespace std;
typedef long long ll;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;

        if(n%4==0)
            cout<<"North"<<endl;
        else if(n%4==1 )
            cout<<"East"<<endl;
        else if(n%4==2 )
            cout<<"South"<<endl;
        else if(n%4==3 )
            cout<<"West"<<endl;

    }

    return 0;

}
