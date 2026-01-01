#include <bits/stdc++.h>
using namespace std;

void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
	// your code goes here
    int n;
    cin >>n;
    print2(n);
    
    return 0;
}
