//A vector in C++ is a conatiner and a  dynamic array that can grow or shrink in size. It is part of the Standard Template Library (STL) and provides various functionalities such as adding, removing, and accessing elements.
#include<bits/stdc++.h>
using namespace std;
void explainVector(){
 vector<int>v;//Creates an empty container
 v.push_back(10); //Will add 10 to the empty container
 v.emplace_back(20); //Will work like push_back as it adds the elements to the vector.
 vector<int>v2(5,100); //Creates a vector of size 5, with each element initialized to 100
 //Syntax for iterator in vector
 //vector <int>:: iterator it;


 for(auto it = v.begin(); it!=v.end(); it++){
    cout<<*(it)<<" ";
 }

 for(auto it : v){
    cout<<it<<" ";
 }
//Inserting in vector
vector<int>v3(2,100);
v3.push_back(200);
v3.push_back(300);
v3.insert(v3.begin(),400);
v3.insert(v3.begin()+1,500);
for(auto it : v3){
    cout<<it<<" ";
}
}
int main(){
    explainVector();
    return 0;
}








/*
Q) Why is it faster than push_back?
-> push_back creates a temporary object and then copies or moves it into the container.
   emplace_back constructs the object directly in the memory of the container, avoiding the extra copy or move.
   
   ----Different types of iterators----
   1. r.end() - Returns a reverse iterator to the end of the vector.
   2. r.begin() - Returns a reverse iterator to the beginning of the vector.
   3. end()- Returns an iterator to the end of the vector right after the last element.
   4. begin() - Returns an iterator to the beginning of the vector.

   Using "auto in iterator" will help to directly assign the datatype for you without declaring it explicitly.
*/