    #include<iostream>
    using namespace std;

    int main()
    {
    	int arr[500];

    	for(int i=1;i<=500;i++)
    	{
    		int t=(i*(i+1))/2;
    		arr[i-1]=t;
    	}

    	//cout<<arr[1]<<endl;

    	int inp;
    	cin>>inp;
    	int flag=0;

    	for(int i=1;i<=500;i++)
    	{
    		if(arr[i-1]==inp)
    		{
    			flag=1;
    			break;
    		}
    	}

    	if(flag==1)cout<<"YES"<<endl;
    		else cout<<"NO"<<endl;

    	return 0;
    }
