    #include<iostream>
    using namespace std;

    int main()
    {
        int n;
        cin>>n;

        int *arr=new int[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int flag=0;
        int e=0;
        int o=0;

        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)e++;
            else o++;
        }

        int str=-1;

        if(e>o)
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]%2!=0)str=i+1;
            }

            cout<<str<<endl;

        }

        else{

            for(int i=0;i<n;i++)
            {
                if(arr[i]%2==0)str=i+1;
            }

            cout<<str<<endl;

        }

        return 0;




    }
