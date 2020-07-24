#include<iostream>
using namespace std;

int main()
{
	int n,d;
	cin>>n>>d;
	int c=0;
	int *arr=new int[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		//cout<<arr[i];
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j!=i)
			{
				if(arr[j]>arr[i])
				{
					//cout<<arr[j]-arr[i]<<endl;
					if((arr[j]-arr[i])<=d)
						c+=1;
				}

				else
				{
					//cout<<arr[i]-arr[j]<<endl;
					if((arr[i]-arr[j])<=d)
						c+=1;
				}

			}
		}
	}

	cout<<c<<endl;

	return 0;
}
