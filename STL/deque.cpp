//Deque combines features of both vectors and lists, allowing fast insertions and deletions at both ends.
#include<bits/stdc++.h>
using namespace std;
void explainDeque(){
    deque<int>dq;
    dq.push_back(10); // Adds 10 to the back of the deque
    dq.push_front(20); // Adds 20 to the front of the deque
    dq.pop_back();
    for(auto it:dq){
        cout<<it<<" ";
    }
}

int main(){
    explainDeque();
    return 0;
}