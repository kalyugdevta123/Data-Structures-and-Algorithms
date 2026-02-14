#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n ;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	// precompute
	unordered_map<int,int> mpp;
	for(int i=0;i<n;i++){
	    mpp[arr[i]]++;
	}// precomputation can be done in the input as well
	
	//iterate in the map
	for(auto it:mpp){
	    cout << it.first << "->" << it.second << endl;
	}
	// here there is no particular order
	int q;
	cin >> q;
	while(q--){
	    int number;
	    cin >> number;
	    // fetch
	    cout <<mpp[number] << endl;
	}
	
	return 0;

}
