#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int sum=0,i=0,r,n;
	cin>>n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*pow(2,i);
        i++;
    }
    cout<<sum;
	return 0;
}
