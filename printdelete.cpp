//printing 0 to n number and deleting number again print remaining number
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int a[100],n,i,j,del;
	cout<<"enter total no. of elements"<<endl;
	cin>>n;
	//printing numbers  from 0 to n
	for(i=0;i<=n;i++)
	{
		a[i]=i;
		cout<<a[i]<<" ";
	
	}
	cout<<"\nenter no. to be deleted"<<endl;
	cin>>del;

 // printing numbers except deleted numbers
cout<<"after deleting:"<<endl;
	for(i=0;i<=n;i++)
	{
	if(a[i]==del)
	continue;
		cout<<a[i]<<" "<<endl;	
	}
	//sum of numbers except the deleted number
	cout<<"sum of number"<<((n*(n+1))/2-del)<<endl;
	
}
