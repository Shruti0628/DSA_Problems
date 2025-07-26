//Stack is a container that implements the LIFO (Last In First Out) principle. It allows you to add and remove elements from the top of the stack only.
#include<bits/stdc++.h>
using namespace std;
void explainStack(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.emplace(40);
    //Printing the top element
    cout<<st.top()<<endl;
    //Removing the top element
    st.pop();
    //Printing the top element after pop
    cout<<st.top()<<endl;
    // Stacks do not support iterators, so to print all elements,
    // you need to pop elements one by one (this will empty the stack)
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
int main(){
    explainStack();
    return 0;
}