    #include<iostream>
    using namespace std;

    int main()
    {
        int n,m;
        cin>>n>>m;

        int **arr;
        arr=new int*[n];

        for(int i=0;i<n;i++)
        {
            arr[i]=new int[m];
        }

        int flag=1;
        string s;
        char *arr1;
        arr1=new char[m];

        for(int i=0;i<n;i++)
        {
            cin>>s;
            for(int k=0;k<s.length();k++)
            {
                arr1[k]=s[k];
            }

            for(int j=0;j<m;j++)
            {

                 arr[i][j] = arr1[j];
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(j!=0)
                {
                    if(arr[i][j]!=arr[i][j-1]) flag=0;
                }

            }

            if(i!=0)
            {
                if(arr[i][0]==arr[i-1][0]) flag=0;
            }

        }

        if(flag==0)
        {
            cout<<"NO"<<endl;
        }

        else cout<<"YES"<<endl;

        return 0;




    }
