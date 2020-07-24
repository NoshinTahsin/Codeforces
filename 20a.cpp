    #include<iostream>
    using namespace std;

    int main()
    {
        string i;
        cin>>i;
        char *arr;
        arr=new char[i.length()];
        int k=0;
        for(int j=0;j<i.length();j++)
        {
            if(j!=0)
            {
                if(i[j]=='/'&& i[j-1]=='/')
                {
                    //arr[k++]=i[j];
                    int kk=0;
                }

                else
                {
                    arr[k++]=i[j];

                }
            }

        }
        int y=1;
        cout<<'/';
        for(int j=0;j<k;j++)
        {
            if(j==k-1 && arr[j]=='/')
            {
                y=0;
            }

            if(y==1)cout<<arr[j];
        }

        cout<<endl;

        return 0;




    }
