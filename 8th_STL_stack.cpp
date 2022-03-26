#include<iostream>
#include<stack>
using namespace std;
int main()
{
    //last in first out-->LIFO
    stack<int>st;
    st.push(1);
    //cout<<st.top();
    st.push(2); //2
    st.push(3); //2 3
    st.emplace(5);// 2 3 5
    cout<<st.top();//5
    st.pop();//top will be removed(2 3)
    st.size();//gives size of stack(2)
    cout<<st.empty();//gives true if stack is empty or false(false)
    stack<int>st1,st2;
    st1.swap(st2);//swaps the stacks s1 and s2


}
