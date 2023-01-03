#include<iostream>
#include<math.h>
using namespace std;

int divide(float a,float b)
{
	int sign=(a<0)^(b<0);
	a=abs(a);
	b=abs(b);
	if(b==1)
		return ((sign==0)?a:-a);
	
	int ans=exp(log(a)-log(b))+0.0000000001;
	return ans; 
}


int main()
{
	int n;
	cin>>n;
	int a[n],ans[n],mul=1,c=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(int i=0;i<n;i++)
	{
		if(a[i])
		{
			mul*=a[i];
		}
		else
			c++;

	}

	for(int i=0;i<n;i++)
	{  
		if(a[i])
		ans[i]=divide(mul,a[i])*(c>0?0:1);
	   else if(!a[i])
	   	ans[i]=(mul)*(c>1?0:1);

	}

   for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}

	return 0;


}