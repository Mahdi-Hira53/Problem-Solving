#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,n;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>n;
		int a[n];
		int pushCount=0,popCount=0;
		int flag=1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==1){
				pushCount++;
			}
			else if(a[i]==0){
				popCount++;
			}

			if(popCount>pushCount){
				flag=0;
			}
		}
		if(flag==0){
			cout<<"Invalid"<<endl;
		}
		else{
			cout<<"Valid"<<endl;
		}
	}

	return 0;
}

