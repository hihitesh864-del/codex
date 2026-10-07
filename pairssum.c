#include<stdio.h>

int main(){
    int a[8]={1,2,3,4,5,6,7,8};
    int target=5,count=0;
    int sizearray=8;
    for(int i=0;i<sizearray;i++){
    
        for(int j=i+1;j<sizearray;j++){
            if(a[i]+a[j]==target){
                count++;
                printf("%d %d\n",a[i],a[j]);
                
            }
        }
        
    }
    printf("count is %d ",count);
    
}