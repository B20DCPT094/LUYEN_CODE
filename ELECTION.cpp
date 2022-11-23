#include <bits/stdc++.h>
using namespace std;

bool check(int n, int k,int a[], long s){
    int p = a[0]*n,q = s + k;
    if(q == p || ((q-p)>0)&&(q-p)%n==0) return true;
    return false; 
}


int main(){
    int t,a[100001];
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    long s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+n,greater<int>());
    if(check(n,k,a,s)==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    
}