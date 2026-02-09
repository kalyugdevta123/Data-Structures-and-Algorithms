// Sum of numbers
#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);

}

int main(){
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}

// Factorial of numbers
#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0) return 1;
    return n* factorial(n-1);
}

int main() {
	// your code goes here
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}

