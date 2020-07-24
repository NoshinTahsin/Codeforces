    #include<iostream>
    using namespace std;

    int check(int a, int b, int c)
    {
         if(a+b>c && a+c>b && b+c>a)
            return 1;
        // cout<<"TRIANGLE"<<endl;
         else if (a+b==c || a+c==b || b+c==a)
            return 2;
        // cout<<"SEGMENT"<<endl;
            else
                return 0;
            //cout<<"IMPOSSIBLE"<<endl;
    }

    int main()
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int e=check(a,b,c);
        int f=check(a,b,d);
        int g=check(a,c,d);
        int h=check(b,c,d);


        if( e||f ||g ||h )
        {
            if(e==1 || f==1 ||g==1 ||h==1)
                cout<<"TRIANGLE"<<endl;

                else cout<<"SEGMENT"<<endl;

        }

        else cout<<"IMPOSSIBLE"<<endl;

        return 0;
    }
