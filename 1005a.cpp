#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int st=arr[0];
	int stair=1;
	int cnt=1;
	int cntArr[n];

	for(int i=0;i<n;i++)
	{
		cntArr[i]=-1;
	}

	int j=0;

	for(int i=1;i<n;i++)
	{
		if(arr[i]>st)
		{
			cnt++;
			st=arr[i];
		}

		else
		{
			cntArr[j]=cnt;
			j++;
			cnt=1;
			stair++;
			st=arr[i];
		}
	}

	cntArr[j]=cnt;

	cout<<stair<<endl;

	for(int j=0;j<n;j++)
	{
		if(cntArr[j]!=-1)
		{
			cout<<cntArr[j]<<" ";
		}
	}

	return 0;
}
