#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,c=0;
        cin>>n;
        int a[n];
        map<int,int> m;
        for(i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
         for(i=n-1;i>=0;i--){
           if(m[a[i]]>0){
             c++;
             m[a[i]]=0;
           }
           else{
            break;
           }
        }
        cout<<n-c<<endl;
    }
}