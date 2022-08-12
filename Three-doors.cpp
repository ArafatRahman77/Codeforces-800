#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
    int k;
    cin>>k;
    int i;
    int a[3];
    for(i=0;i<3;i++){
        cin>>a[i];
    }
    if(a[k-1]!=0){
        if(a[a[k-1]-1]!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
   }
}