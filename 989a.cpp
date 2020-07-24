    #include<iostream>
    using namespace std;

    int main()
    {
    	string s;
    	cin>>s;

    	int l=s.length();
    	int flag=0;

    	for(int i=1;i<l-1;i++)
    	{
    		if(s[i]=='A')
    		{
    			if((s[i-1]=='B' && s[i+1]=='C') || (s[i-1]=='C' && s[i+1]=='B'))
    			{
    				flag=1;
    			}
    		}

    		else if(s[i]=='B')
    		{
    			if((s[i-1]=='A' && s[i+1]=='C') || (s[i-1]=='C' && s[i+1]=='A'))
    			{
    				flag=1;
    			}
    		}

    		else if(s[i]=='C')
    		{
    			if((s[i-1]=='B' && s[i+1]=='A') || (s[i-1]=='A' && s[i+1]=='B'))
    			{
    				flag=1;
    			}
    		}
    	}

    	if(flag==1)cout<<"Yes"<<endl;
    	else cout<<"No"<<endl;

    	return 0;
    }
