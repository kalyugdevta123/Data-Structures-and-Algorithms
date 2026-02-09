//1 (Printing name for n times as specified)

#include <bits/stdc++.h>
using namespace std;

// Added 'int' types to parameters
void print(int i, int n) {
    if (i > n) return;
    cout << "Akash" << endl; 
    print(i + 1, n);
}

int main() {
    int n;
    cin >>n;
    print(1, n);
    
    return 0;
}

//2 (Printing from 1 to N and N to 1)
#include <bits/stdc++.h>
using namespace std;

void print(int i,int n){
    if (i>n) return ;
    cout << i ;
    print(i+1,n);

}

int main(){
    int n;
    cin >> n;
    print(i,n);
    return 0;

}

