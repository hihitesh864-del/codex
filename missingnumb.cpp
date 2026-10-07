#include<iostream>

using namespace std;

int main(){
    int a[]={9,6,4,2,3,5,7,0,1};
    int miss;
    int n=sizeof(a)/sizeof(a[0]);
    int sum=n*(n+1)/2,arrsum=0;
    for(int i=0;i<n;i++){
         arrsum=arrsum+a[i];
    }

    cout<<"missing is "<<sum-arrsum;

}