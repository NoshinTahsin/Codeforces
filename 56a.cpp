    #include<iostream>
    #include<sstream>
    using namespace std;

    int checkNumber(string s)
    {
        int l=s.length();
        int cc=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]>='0' && s[i]<='9')cc++;
        }

        if(cc==l)return 1;
        return 0;
    }

    int main()
    {
        string arr[]={ "ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
        int n;
        cin>>n;
        int a;
        int c=0;
        string s;

        for(int i=0;i<n;i++)
        {
            cin>>s;
            if(checkNumber(s))
            {
                istringstream iss(s);
                iss>>a;
                if(a<18)c++;
            }

            else
            {
                for(int j=0;j<11;j++)
                {
                    if(arr[j]==s )
                        c++;
                }
            }
        }

        cout<<c<<endl;
        return 0;

    }
