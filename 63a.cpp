    #include<iostream>
    using namespace std;

    struct st{
        string name;
        string r;
    };

    int main()
    {
        int n;
        cin>>n;
        st *arr=new st[n];
        //st *cop=new st[n];
        int *track=new int[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i].name;
            cin>>arr[i].r;

            if(arr[i].r=="rat")track[i]=0;
            else if(arr[i].r=="child")track[i]=1;
            else if(arr[i].r=="woman")track[i]=1;
            else if(arr[i].r=="man")track[i]=2;
            else if(arr[i].r=="captain")track[i]=3;
        }

        /*for(int i=0;i<n;i++)
        {
            cop[i].name=arr[i].name;
            cop[i].r=arr[i].r;
        }*/

        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(track[j]>track[j+1])
                {
                    string temp;
                    temp=arr[j].name;
                    arr[j].name=arr[j+1].name;
                    arr[j+1].name=temp;

                    temp=arr[j].r;
                    arr[j].r=arr[j+1].r;
                    arr[j+1].r=temp;

                    int t;
                    t=track[j];
                    track[j]=track[j+1];
                    track[j+1]=t;
                }
            }
        }



        for(int i=0;i<n;i++)
        {
            cout<<arr[i].name<<endl;
        }

        return 0;
    }
