    #include<iostream>
    using namespace std;

    int main()
    {
    	int t;
    	cin>>t;
    	double a,n;
    	int comp;

    	while(t--)
    	{
    		cin>>a;

    	    n=360/(180-a);

    		comp=(int)n;

    		if(n==comp)cout<<"YES"<<endl;
    			else cout<<"NO"<<endl;
    	}

    	return 0;
    }
