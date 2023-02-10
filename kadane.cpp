#include <bits/stdc++.h> 
using namespace std;
    
 int cnt1=0, cnt0=0;
    int main(){
    for(auto i=0; i<n; i++){
        if(arr[i]==1){
            cnt1++;
            arr[i]=-1;
        }
        else{ 
            cnt0++;
            arr[i]=1;
        }
    
    return cnt1 ;
}   
    