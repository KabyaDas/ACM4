#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d,e,f;
	cin>>t;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	while(t !=0){
	if(a>b)
	{
	    e = b+c;
	   if(e>a)
	   {
	        f = a+d;
	       
	           if(f>e)
	           {
	               cout<<"N"<<endl;
	           }
	           else
	           {
	               cout<<"S"<<endl;
	           }
	       
	   }
	   else
	   {
	       cout<<"N"<<endl;
	   }
	}
	if(a<b)
	{
	    e = a+c;
	   if(e>b)
	   {
	        f = b+d;
	       
	       if(f>e)
	       {
	           cout<<"S"<<endl;
	       }
	       else
	       {
	         cout<<"N"<<endl;  
	       }
	   }
	   else
	   {
	       cout<<"S"<<endl;
	   }
	}
	
	if(a==b)
	{
	    e = b+c;
	    f = a+d;
	    if(f>=e)
	    {
	        cout<<"N"<<endl;
	    }
	    else
	    {
	        cout<<"S"<<endl;
	    }
	}
	t = t-1;
	}
	return 0;
}







