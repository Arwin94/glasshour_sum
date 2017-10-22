#include<iostream>
using namespace std;
int main()
{
	int R,c;
	int m[10][10];
	cout<<"enter rows ";
	cin>>R;
	cout<<"enter columns ";
	cin>>c;
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>m[i][j];
		}
		
		
	 } 
	 cout<<" matrix is "<<endl;
	 	for(int i=0;i<R;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	 }
	 if(R<3||c<3)
	 {
	 	return -1;
	 }
	 int max_sum=INT_MIN;
	 int result;
	 for(int i=0;i<R-2;i++)
	 {
	 	for(int j=0;j<c-2;j++)
	 	{
	 		int sum=m[i][j]+m[i][j+1]+m[i][j+2]+m[i+1][j+1]+m[i+2][j]+m[i+2][j+1]+m[i+2][j+2];
	 	    max_sum=max(max_sum,sum);
	 	   
		 }
		
	 }
	  cout<<" the maximum sum of hour glass is "<<max_sum;
	
	 return(0);
	  
}
