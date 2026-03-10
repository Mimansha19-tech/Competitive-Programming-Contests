#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        /*vector<int>b=a;
        sort(b.begin(),b.end());
        for(int j=1;j<n-1;j++){
            if(a[j-1]<a[j] && a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
            }
            if(b==a)
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;*/
            if (a[0] == 1)
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;

    }
    return 0;
}