//List is also a container that is similar to vector but it gives you front operations as well. And also it uses doubly linked list for implementation.
#include<bits/stdc++.h>
using namespace std;
void explainList(){
    list<int>ls;
    ls.push_back(10);
    ls.push_front(20); //Adds 20 to the front of the list
    ls.emplace_back(30); //Adds 30 to the back of the list

    //Printing the list
    for(auto it : ls){
        cout<<it<<" ";
    }
}
int main(){
    explainList();
    return 0;
}