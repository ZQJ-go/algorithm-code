#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	vector<int>a(n+1);
	for(int i=1;i<n;i++){
		int u,v;
		cin>>u>>v;
		a[u]++;
		a[v]++;
	}
	vector<int>one;
	for(int i=1;i<=n;i++){
		if(a[i]==1)one.push_back(i);
		if(a[i]>2){
			cout<<"-1"<<endl;
			return;
		}
	}
	if(one.size()!=2){
		cout<<"-1"<<endl;
		return;
	}
	for(auto p:one){
		cout<<p<<' ';
	}

}
int main()
{
	solve();
	return 0;
	
}