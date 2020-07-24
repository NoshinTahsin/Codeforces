    #include<iostream>
    using namespace std;
    int main()
    {
    	int gl,gr;
    	int bl,br;
    	cin>>gl>>gr>>bl>>br;
    	if((br>=gl-1 && br<=2*(gl+1)) || (bl>=gr-1 && bl<=2*(gr+1)))
    	{
    		cout<<"YES"<<endl;
    	}
    	else
    		cout<<"NO"<<endl;
    	return 0;
    }
