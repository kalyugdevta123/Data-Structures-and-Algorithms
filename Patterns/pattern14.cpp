#include <bits/stdc++.h>
using namespace std;

void print14(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main() {
	// your code goes here
    int n;
    cin >> n;
    print14(n);
}
