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
	/*int max=a[0],min=a[0];
	for(int i=0;i<n;i++){
		if(max<=a[i])
			max=a[i];
		if(min>=a[i])
			min=a[i];
	}
	cout<<"\nMaximum Element:"<<max<<"\nMinimum Element:"<<min;*/
	
	cout<<"\nReverse of the  array:";
	for(int i=n-1;i>=0;i--){
		cout<<"\n"<<a[i];
	
			
	}
	return 0;
}
