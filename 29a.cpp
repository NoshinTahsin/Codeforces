    #include<iostream>
    using namespace std;

    int main()
    {
        int n;
        cin>>n;

        int **arr;
        arr=new int*[n];

        for(int i=0;i<n;i++)
        {
            arr[i]=new int[2];
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>arr[i][j];
            }
        }

        int sum=0;
        int sum1=0;
        int flag=0;

        for(int i=0;i<n;i++)
        {
            sum=arr[i][0]+arr[i][1];
           // cout<<sum<<endl;
            for(int j=0;j<n && j!=i;j++)
            {
                if(sum==arr[j][0])
                {
                     sum1=arr[j][0]+arr[j][1];
                   //  cout<<sum1<<endl;
                     if(sum1==arr[i][0])flag=1;
                }
            }
        }

        if(flag==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        return 0;

    }



