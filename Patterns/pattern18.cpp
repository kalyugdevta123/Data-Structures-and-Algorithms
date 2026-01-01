#include <bits/stdc++.h>
using namespace std;

void print18(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main() {
	// your code goes here
    int n;
    cin >> n;
    print18(n);
}
