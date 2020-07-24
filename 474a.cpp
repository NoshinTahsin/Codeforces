#include<iostream>
using namespace std;

int main()
{
	char c;
	cin>>c;

	char arr1[10]={'q','w','e','r','t','y','u','i','o','p'};
	char arr2[10]={'a','s','d','f','g','h','j','k','l',';'};
	char arr3[10]={'z','x','c','v','b','n','m',',','.','/'};

	string s;
	cin>>s;

	int l=s.length();

	if(c=='R')
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(arr1[j]==s[i])
			{
				cout<<arr1[j-1];
			}
		}

		for(int j=0;j<10;j++)
		{
			if(arr2[j]==s[i])
			{
				cout<<arr2[j-1];
			}
		}

		for(int j=0;j<10;j++)
		{
			if(arr3[j]==s[i])
			{
				cout<<arr3[j-1];
			}
		}
	}

	if(c=='L')
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(arr1[j]==s[i])
			{
				cout<<arr1[j+1];
			}
		}

		for(int j=0;j<10;j++)
		{
			if(arr2[j]==s[i])
			{
				cout<<arr2[j+1];
			}
		}

		for(int j=0;j<10;j++)
		{
			if(arr3[j]==s[i])
			{
				cout<<arr3[j+1];
			}
		}
	}

	return 0;
}
