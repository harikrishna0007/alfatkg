#include <iostream>
using namespace std;

int main() {
	int n,sum=0;
	cin>>n;
	int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sum=a[0];
  for(int j=0;j<n;j++){
    if(j!=n-1){
      sum+=a[j+1];
      cout<<sum<<" ";
    }

  }
}
