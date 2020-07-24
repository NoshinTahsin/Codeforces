#include<iostream>
using namespace std;
int main()
{
	string s1;
	cin>>s1;
	int dif='a'-'A';
	int l=s1.length();
	int low=0;
	int up=0;
	for(int i=0;i<l;i++)
	{
		if(s1[i]>='a' && s1[i]<='z')low++;
		else up++;
	}

	if(up>low)
	{
		for(int i=0;i<l;i++)
		{
			if(s1[i]>='A' && s1[i]<='Z')cout<<s1[i];
			else
			{
				char ch=s1[i]-dif;
				cout<<ch;
			}
		}
	}

	else

		for(int i=0;i<l;i++)
		{
			if(s1[i]>='a' && s1[i]<='z')cout<<s1[i];
			else
			{
				char ch=s1[i]+dif;
				cout<<ch;
			}
		}

		cout<<endl;

	return 0;
}


