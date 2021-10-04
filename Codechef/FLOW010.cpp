include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        if(s[0]=='b'||s[0]=='B')
            cout<<"BattleShip"<<endl;
        else if(s[0]=='c'||s[0]=='C')
            cout<<"Cruiser"<<endl;
        else if(s[0]=='d'||s[0]=='D')
            cout<<"Destroyer"<<endl;
        else
            cout<<"Frigate"<<endl;
    }
}
