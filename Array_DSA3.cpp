#include<iostream>
using namespace std;
int main()
{
	int a[100],n;
	cout<<"No. of elements to be entered:";
	cin>>n;
	cout<<"\nEnter Elements:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"\nSorting Array";
	for(int i=0;i<n;i++){
		if(a[i]>=a[i+1])
			{a[i]=a[i+1];
			a[i+1]=a[i+2];
			}
		
			
		
	}
	for(int i=0;i<n;i++){
		cout<<"\n"<<a[i];
	}	
	
	return 0;
}
