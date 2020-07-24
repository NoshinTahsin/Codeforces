    #include<iostream>
    using namespace std;

    int main()
    {
    	string a;
    	int b;
    	cin>>a>>b;
    	string arr[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    	b=b%12;
    	for(int i=0;i<12;i++)
    	{
    		if(arr[i]==a)
    		{
    			if(i+b<=11)
    				cout<<arr[i+b]<<endl;
    			else
    				cout<<arr[b-(11-i)-1]<<endl;
    		}
    	}

    	return 0;
    }
