#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
   int pos,val;
   scanf("%d %d",&pos,&val);
   for(int i=n;i>=pos+1;i--){
   }
   arr[pos]=val;
   for(int i=0;i<=n;i++){
    printf("%d ",arr[i]);
   }

}