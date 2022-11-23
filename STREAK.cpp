#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s[n];
	int *b;
	b=new int[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
		b[i]=1;
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(s[j]==s[j-1]){
				b[j]+=1;
			}
			else{
				break;
			}
		}
	}
	int maxh=0,maxt=0;
	for(int i=0;i<n;i++){
		if(b[i]>maxh&&s[i]=="Heads"){
			maxh=b[i];
		}
		if(b[i]>maxt&&s[i]=="Tails"){
			maxt=b[i];
		}
	}
	cout<<maxh<<' '<<maxt;
}