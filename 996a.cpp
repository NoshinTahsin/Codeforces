    #include<iostream>
    using namespace std;

    int main()
    {
        int arr[5]={100,20,10,5,1};
        long long n;
        cin>>n;

        long long sum=0;
        int div;
        int rem;

        for(int i=0;i<5;i++)
        {
            if(arr[i]<=n)
            {
                div=n/arr[i];
                rem=n%arr[i];
                sum+=div;
                n=rem;
                if(rem==0)break;
            }
        }

        cout<<sum<<endl;
        return 0;


    }
