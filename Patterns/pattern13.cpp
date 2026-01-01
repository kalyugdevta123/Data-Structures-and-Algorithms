#include <bits/stdc++.h>
using namespace std;
void print13(int n){
    int start =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << start << " " ;
            start =start+1;
        }
        cout << endl;
    }
}
int main() {
	// your code goes here
    int n;
    cin >> n;
    print13(n);
}
