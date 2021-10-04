
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,p,q;
    cin>>t;
    while(t--){
        int x1,x2,x3,x4,y1,y2,y3,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;


        a=sqrt(((x1-x4)*(x1-x4))+((y1-y4)*(y1-y4)));
        b=sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
        p=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        q=sqrt(((x4-x3)*(x4-x3))+((y4-y3)*(y4-y3)));

        if(x1==x2 && x1==x3 && x1==x4 && y1==y2 && y1==y3 && y1==y4)
            cout<<"no"<<endl;
        else if(a==b && p==q)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a,b,a1,b1,a2,b2,a3,b3;
        cin >>a>>b>>a1>>b1>>a2>>b2>>a3>>b3;

        float x=sqrt(pow(a3-a,2)+pow(b3-b,2) *1.0);
        float y=sqrt(pow(a2-a1,2)+pow(b2-b1,2) *1.0);

        float m=sqrt(pow(a1-a,2)+pow(b1-b,2) *1.0);
        float n=sqrt(pow(a3-a2,2)+pow(b3-b2,2) *1.0);

        float d1=sqrt(pow(a3-a1,2)+pow(b3-b1,2) *1.0);
        float d2=sqrt(pow(a2-a,2)+pow(b2-b,2) *1.0);


        if(a==a1 && a==a2 && a==a3 && b==b1 && b==b2 && b==b3)
            cout<<"no"<<endl;
        else if(x==y and d1==d2 and m==n)
                cout << "yes\n";
        else
            cout << "no\n";


    }
}
/*
