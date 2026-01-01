#include <bits/stdc++.h>
using namespace std;

void explainPQ(){
    //MAXIMUM HEAP
    priority_queue<int> pq;

    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << pq.top();
    pq.pop();
    cout << pq.top();

    //MINIMUM HEAP
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    cout << pq.top();

}

int main(){


}