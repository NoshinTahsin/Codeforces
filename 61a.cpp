#include<iostream>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;

	int l=s1.length();
	int *arr=new int[l];

	for(int i=0;i<l;i++)
	{
		arr[i]=0;
	}

	for(int i=0;i<l;i++)
	{
		if(s1[i]!=s2[i])arr[i]=1;
	}

	for(int i=0;i<l;i++)
	{
		cout<<arr[i];
	}

	cout<<endl;

	return 0;
}

