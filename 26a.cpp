    #include<iostream>
    using namespace std;

    int isPrime(int num)
    {
    	int flag=0;

    	for(int i=2;i<=num/2;i++)
    	{
    		if(num%i==0)flag=1;
    	}

    	if(flag==0)return 1;
    	return 0;
    }

    int main()
    {
    	int n;
    	cin>>n;

    	int almostPrime=0;

    	for(int i=1;i<=n;i++)
    	{
    			int primeCount=0;


    		for(int j=2;j<=i/2;j++)
    		{
    			if(i%j==0)
    			{
    				if(isPrime(j))
    				{
    					primeCount++;
    				}
    			}
    		}

    		if(primeCount==2)
    		{
    			almostPrime++;
    		}
    	}

    	cout<<almostPrime<<endl;

    	return 0;
    }
