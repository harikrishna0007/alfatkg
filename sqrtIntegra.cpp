#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,count=0;
    cin>>a>>b;
    while(a<=b){
        int m=(int)(ceil(sqrt(a)));
        int n=(int)(floor(sqrt(b)));
        if(m==a && n==b)
        break;
        a=m;
        b=n;
        if(a<=b){
            count++;
        }
    }
    cout<<count;
    return 0;
}
