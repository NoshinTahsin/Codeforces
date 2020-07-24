    #include<iostream>
    using namespace std;

    int main()
    {
    	string s;
    	int flag=0;
    	getline(cin,s);
    	for(int i=s.length()-1;i>=0;i--)
    	{
    		if((s[i]>='a' && s[i]<='z') || ( s[i]>='A' && s[i]<='Z'))
    		{
    			if(s[i]=='a' || s[i]=='e'||s[i]=='i' || s[i]=='o'||s[i]=='u'||s[i]=='y' || s[i]=='A'||s[i]=='E' || s[i]=='I'||s[i]=='O' || s[i]=='U' || s[i]=='Y')
    			{
    				flag=1;
    				break;
    			}

    			else
    			{
    				flag=0;
    				break;
    			}



    		}


    	}
    		if(flag==1)cout<<"YES"<<endl;
    			else cout<<"NO"<<endl;

    		return 0;
    }
