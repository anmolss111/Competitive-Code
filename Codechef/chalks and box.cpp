#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int k;
	    cin>>k;
	    long int count=0;
	    sort(a,a+n);
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            if(a[i]*a[j]==k){
	                count++;
	            }
	            else if(a[i]*a[j]>k){
	                break;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
