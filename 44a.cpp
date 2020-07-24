#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string a,b;
	int c=0;
	getline(cin,a);
	string *tree=new string[n];
	string *col=new string[n];
	string *tree1=new string[n];
	string *col1=new string[n];

	for(int i=0;i<n;i++)
	{
		getline(cin,a);
		tree[i]=a;
		//cout<<tree[i]<<endl;
	}

	for(int i=0;i<n;i++)
	{
		tree1[i]=tree[i];
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			{
				if(tree[i]==tree[j])
				{
				//	cout<<tree1[i]<<'\t'<<tree[j]<<endl;
					tree[i]="";

				}
			}
		}
	}


	/*for(int j=0;j<n;j++)
	{
		cout<<tree[j]<<endl;
	}
	*/
	for(int j=0;j<n;j++)
	{
		if(tree[j]!="")
			c++;
	}

	cout<<c<<endl;
	return 0;
}

