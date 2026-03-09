#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,x;
        cin>>n>>x;
        int a[n+2];
        a[0]=0;
        a[n+1]=x;
        for(int j=1;j<n+1;j++){
            cin>>a[j];
        }
        int m=0;
        for(int k=0;k<n+1;k++){
            if(k==n){
            int diff=(a[k+1]-a[k])*2;
            m=max(m,diff);
        }
        else {
        int diff=a[k+1]-a[k];
        m=max(m,diff);
    }
}
cout<<m<<endl;
    }
    return 0;
}
