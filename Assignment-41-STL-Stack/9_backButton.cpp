#include <bits/stdc++.h>
using namespace std;

string current_state_url = "";
stack<string> forward_stack;
stack<string> backward_stack;

void visit_new_url(string url)
{
    if(current_state_url != ""){
        backward_stack.push(current_state_url);
    }
    current_state_url = url;
}

void forward()
{
    if(forward_stack.empty() || current_state_url == forward_stack.top()){
        cout<<" Not Available\n";
        return;
    }
    else{
        backward_stack.push(current_state_url);
        current_state_url = forward_stack.top();
        forward_stack.pop();
    }
}
void backward()
{
    if(backward_stack.empty() || current_state_url == backward_stack.top()){
        cout<<" Not Available\n";
        return;
    }
    else{
        forward_stack.push(current_state_url);
        current_state_url = backward_stack.top();
        backward_stack.pop();
    }
}

void simulaterFunction()
{
    
}