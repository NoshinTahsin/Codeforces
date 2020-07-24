#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int *arr;
	arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int str=0;

	for(int j=1;j<=3000;j++)
	{
		int flag=0;

		for(int i=0;i<n;i++)
		{
			if(arr[i]!=j && flag==0)
			{
				str=j;
			}

			else str=-1;

			if(str==-1)flag=1;
		}

		if(flag==0)break;
	}

	if(n==3000) str=3001;

	cout<<str<<endl;

	return 0;
}
