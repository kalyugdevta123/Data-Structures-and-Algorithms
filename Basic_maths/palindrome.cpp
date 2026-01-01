#include <bits/stdc++.h>
using namespace std;

int revNum=0;
int main(){
    int n;
    cin >> n;
    int dup =n;

    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        revNum=revNum*10+lastdigit;
    }
    if(revNum==dup) cout << "Yes";
    else cout << "No";
    
    

}