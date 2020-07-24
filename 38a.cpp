#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int *arr=new int[n-1];

	for(int i=0;i<n-1;i++)
	{
		cin>>arr[i];
	}

	int a,b;
	cin>>a>>b;
	int c=b-a;
	int sum=0;

	int id=a-1;
	for(int j=0;j<c;j++)
	{
		sum=sum+arr[id];
		id++;
	}

	cout<<sum<<endl;
	return 0;
}
