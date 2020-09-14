#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define pi (3.141592653589)
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout << fixed;
	cout.precision(10);
	
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int arr[n],a=0;
	    
	    int ans=INT_MIN;
	    
	    for(int i =0;i<n;i++)cin>>arr[i];
	    
	    for(x:arr){
	        a+=x;
	        ans=max(ans,a);
	        a=max(a,0);
	    }
	    
	    cout<<ans<<endl;
	}
	
	
	return 0;
}

