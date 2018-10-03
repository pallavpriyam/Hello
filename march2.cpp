#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	long int n,T;
	cin>>T;
	while(T!=0)
	{
	cin>>n;
	double sum=0;
	double P[n],Q[n],D[n];
	for(long int i=0;i<n;i++)
	{
		cin>>P[i]>>Q[i]>>D[i];
		sum += (100*100-(100-D[i])*(100+D[i]))*P[i]*Q[i]/10000;
	}
	cout<<endl<<setprecision(8)<<sum;
	T--;
}
	return 0;
}
