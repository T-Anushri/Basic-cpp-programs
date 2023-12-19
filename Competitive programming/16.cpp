#include<iostream>
#include<vector>
using namespace std;
int perfectSum(int arr[],int n,int sum)
{
	long dp[n+1][sum+1],i,j,mod=1e9+7;
	for(i=0;i<=sum;i++)
		dp[0][i]=0;
	for(i=0;i<=n;i++)
		dp[i][0]=1;
	for(i=1;i<=n;i++)
		for(j=0;j<=sum;j++)
		{
			if(arr[i-1]<=j)
				dp[i][j]=(dp[i-1][j]+dp[i-1][j-arr[i-1]])%mod;
			else
				dp[i][j]=dp[i-1][j];
		}
	return dp[n][sum];
}
int main()
{
	int n,sum,i;
	cout<<"Enter number of elements and sum: ";
	cin>>n>>sum;
	int arr[n],result;
	cout<<"Enter array elements: ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	result=perfectSum(arr,n,sum);
	cout<<"Number of sub-arrays with the given sum: "<<result;
	return 0;
}
