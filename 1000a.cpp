#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string arr1[n],arr2[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}

	for(int i=0;i<n;i++)
	{
		cin>>arr2[i];
	}

	int cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if((arr1[i]==arr2[j]) && arr2[j]!="null")
			{
				cnt++;
				arr2[j]="null";
				break;
			}
		}
	}

	int ans=n-cnt;
	cout<<ans<<endl;
	return 0;
}
