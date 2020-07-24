#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string *arr=new string[n];
	string *arrn=new string[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		arrn[i]=arr[i];
	}
	int *c=new int[n];
	for(int i=0;i<n;i++)
	{
		 c[i]=0;
	}

	for(int i=0;i<n;i++)
	{
		//int c=0;
		for(int j=0;j<n;j++)
		{

			if(arr[j]!="")
			{
				if(arrn[i]==arr[j])
				{
							//cout<<"j"<<endl;
					//cout<<"hmm"<<endl;
					c[i]++;
					//cout<<arr[j]<<endl;
					arr[j]="";

				}
			}
		}
	}




	int min=0;
	int st;
	for(int i=0;i<n;i++)
	{
		if(c[i]>min){
			min=c[i];
			st=i;
			//cout<<i<<endl;
		}
	}

	cout<<arrn[st]<<endl;
	return 0;
}

