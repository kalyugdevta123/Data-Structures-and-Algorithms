#include <bits/stdc++.h>
using namespace std;

void print8(int n){
    for(int i=0;i<n;i++){
        
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<2*(n-i)-1;j++){
            cout << "*";
        }
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
        
    }
}

int main() {
	// your code goes here
    int n;
    cin >> n;
    print8(n);
}
