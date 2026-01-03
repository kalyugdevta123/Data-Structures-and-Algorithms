#include <bits/stdc++.h>
using namespace std;

int sum =0;
int main(){
    int n;
    cin >> n;
    int dup =n;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
    }
    if(sum=dup) cout << "Yes" ;
    else cout << "No";



}