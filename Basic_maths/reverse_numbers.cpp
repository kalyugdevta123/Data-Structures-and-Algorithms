#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;

    int revNum=0;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        revNum=revNum*10+lastdigit;
    }
    cout << revNum;

    return 0;
}