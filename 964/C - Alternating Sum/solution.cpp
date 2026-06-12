//jiudge: 9397: 1651228820
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000009
 
ll mpow(ll a,ll b,ll m=mod){
	ll ret=1;
	while(b>0){
		if(b&1){
			ret=ret*a%m;
		}
		b>>=1;
		a=a*a%m;
	}
	return ret;
}
 
int main(){
	ll n,a,b,k,ret=0,x,q;
	ll qn,a1;
	cin>>n>>a>>b>>k;
	x=mpow(a,mod-2);
	q=mpow(x*b%mod,k);
	for(int i=1;i<=k;i++){
		int y;
		char ch;
		cin>>ch;
		if(ch=='+'){
			y=1;
		}else{
			y=-1;
		}
		a1=mpow(a,n-i+1)*mpow(b,i-1)%mod;
		ret=(ret+y*a1)%mod;
	}
	qn=mpow(q,(n+1)/k);
	ll ans;
	if(q!=1) ans=(ret*(qn-1)%mod*mpow(q-1,mod-2)%mod)%mod;
	else ans=(ret*((n+1)/k))%mod;
	cout<<(ans+mod)%mod;
	return 0;
}