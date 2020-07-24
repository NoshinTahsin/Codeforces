    #include<iostream>
    using namespace std;
    int main()
    {
    	int flag=0;
    	string s;
    	cin>>s;
    	int len=s.length();
    	for(int i=0;i<len;i++)
    	{
    		if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
    		{
    			flag=1;
    		}
    	}

    	if (flag==1)cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;

    	return 0;
    }
