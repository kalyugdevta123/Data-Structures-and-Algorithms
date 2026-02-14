/*
#include <bits/stdc++.h>
using namespace std;

void countletters(char letter,string s){
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==letter){
            count+=1;
        }
    }
    cout << count << endl;
}

int main() {
	// your code goes here
    string s;
    cin >> s;
    char letter;
    cin >>letter;
    countletters(letter,s);
    
    return 0;
    
}
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin >> s;
	
	// precompute
	int hash[26]={0};
	for(int i=0;i<s.size();i++){
	    hash[s[i]-'a']++;
	}
	
	int q;
	cin >> q;
	while(q--){
	    char c;
	    cin >>c ;
	    //fetch
	    cout << hash[c-'a'] << endl;
	}
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin >> s;
	
	// precompute
	int hash[256]={0};
	for(int i=0;i<s.size();i++){
	    hash[s[i]]++;
	}
	
	int q;
	cin >> q;
	while(q--){
	    char c;
	    cin >>c ;
	    //fetch
	    cout << hash[c] << endl;
	}
    return 0;
}
*/