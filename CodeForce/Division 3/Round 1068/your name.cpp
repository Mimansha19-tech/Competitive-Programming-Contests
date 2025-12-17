#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n,count;
    string a, b;
    cin >> t ;
    for(int i = 0; i < t; i++)  {
        cin >> n;
        cin >> a >> b;
        count=0;
        for (int m = 0; m < n;m++){
            for (int j = 0; j < n; j++){
                 if (a[m] == b[j]) {
                     count++;
                 }
                 }
            }
            if(count==n){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
            return 0;
            }