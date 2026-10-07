#include<iostream>

using namespace std;

int main(){
    int a[]={4, 0, 4, 0, 4};
    int i=0,j=1;

    while(i<5 and j<5){
        if(a[i]==0 and a[j]!=0){
            int temp;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i=0;
            j=1;
        }
        else{
            j++;
            i++;
        }
    }

    for(int x=0;x<5;x++){
        cout<<a[x]<<" ";
    }
}