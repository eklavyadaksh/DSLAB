#include<iostream>
#include<stack>
using namespace std;
 bool areparenthesesbalanced(string expr){
    stack<char> s;

    for(char ch:expr){
        if( ch =='(' || ch=='{'||ch=='['){
            s.push(ch);
        }
        else if( ch==')'||ch=='}'||ch=']'){
            if(s.empty()){
                return false;
            }
            char top=s.top();
            s.pop();
        }

    }
 }
