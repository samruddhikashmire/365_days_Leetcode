/*You are given a stack ‘S’. Your task is to sort the sack recursively.*/
#include <bits/stdc++.h> 
stack<int> sortStack(stack<int> &s)
{
	vector<int> elements;

    // Push elements from stack to vector
    while (!s.empty()) {
        elements.push_back(s.top());
        s.pop();
    }

    // Sort the vector in descending order
    sort(elements.begin(), elements.end());

    // Push sorted elements back into the stack
    for (const auto& element : elements) {
        s.push(element);
    }

    return s; 
}
