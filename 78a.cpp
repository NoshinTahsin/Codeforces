#include<iostream>
using namespace std;

int main()
{
	string s1,s2,s3;
	int flag=0;
	getline(cin,s1);
	getline(cin,s2);
	getline(cin,s3);
	int cnt1=0,cnt2=0,cnt3=0;

	int l1=s1.length();
	int l2=s2.length();
	int l3=s3.length();

	for(int i=0;i<l1;i++)
	{
		if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u')
		{
			cnt1++;
		}
	}

	if(cnt1==5)flag=1;

	if(flag==1)
	for(int i=0;i<l2;i++)
	{
		if(s2[i]=='a' || s2[i]=='e' || s2[i]=='i' || s2[i]=='o' || s2[i]=='u')
		{
			cnt2++;
		}
	}

	if(cnt2!=7)flag=0;

	if(flag==1)
	for(int i=0;i<l3;i++)
	{
		if(s3[i]=='a' || s3[i]=='e' || s3[i]=='i' || s3[i]=='o' || s3[i]=='u')
		{
			cnt3++;
		}
	}

	if(cnt3==5) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

	return 0;

}

