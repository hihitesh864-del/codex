#include<iostream>
using namespace std;

int main(){
    string s="the world is my territory";
    string a[100];
    string sample="";
    
    
    int i=0,j,x;
        for(j=0;j<s.length();j++){
            if(s[j]!=' '){
                   sample=sample+s[j];
            }
            else{
                a[i]=sample;
                i++;
                sample="";
                continue;
            }
        }
        a[i]=sample;
        string word=a[0];
        int mxin=a[0].length();
for(int l=0;l<=i;l++){
    if(a[l].length()<mxin){
            mxin=a[l].length();
           word=a[l];
           
    }
}
cout<<word;  



}