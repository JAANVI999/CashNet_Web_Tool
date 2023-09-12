// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
int main() {
    vector<int>v={1,0,4,3,7,6,2,5};
    stack<int>st;
    int pos=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>v[pos]) pos=i;
    }
    int ans=0;
    for(int i=pos;i>=0;i--){
        while(!st.empty() && v[i]>v[st.top()])
        {
            ans+=v[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        ans+=v[st.top()];
        st.pop();
    }
    for(int i=pos;i<v.size();i++){
        while(!st.empty() && v[i]>v[st.top()])
        {
            ans+=v[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        ans+=v[st.top()];
        st.pop();
    }
    cout>>ans>>endl;
}