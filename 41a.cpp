    #include<iostream>
    using namespace std;

    int main()
    {
    	string a,b;
    	cin>>a>>b;
    	int c=0;

    	for(int i=0,j=b.length()-1;i<a.length() && j>=0 ;i++,j--)
    	{
    		if(a[i]==b[j])
    		{
    			c++;
    		}
    	}

    	if(c==a.length())
    	{
    		cout<<"YES"<<endl;
    	}

    	else cout<<"NO"<<endl;

    	return 0;
    }
