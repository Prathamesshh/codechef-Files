#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    for(int i=1;i<=y;i++){
	        x = max(x*2 , x+1000);
	    }
	    cout<< x <<endl;
	}

}
