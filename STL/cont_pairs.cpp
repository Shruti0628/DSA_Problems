//Pairs is the part of utility library in C++ STL that acts as a container holding two values of different types as a single unit.
#include<bits/stdc++.h>
using namespace std;
void explainPair(){
    pair<int , int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl; // Output: 1 3
    pair<int, pair<int, int>> nestedPair = {1,{2,3}};
    cout<<nestedPair.first<<" "<<nestedPair.second.first<<" "<<nestedPair.second.second<<endl; // Output: 1 2 3
}
int main(){
    explainPair();
    return 0;
}