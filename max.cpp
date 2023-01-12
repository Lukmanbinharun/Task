#include<bits/stdc++.h>
using namespace std;

int main(){
    int Q;
    cin>>Q;
    stack<int>first,second;
    // cout<<*(all.end()-1);
    // auto it = all.begin() + 1;
    // all.insert(it,5);
    // for (auto it = all.end(); ;it--)
    // {
    //     // cout<<*it;
    //     if(*it >= 6){
    //         all.insert(it,6);
    //         break;
    //     } 
    // }

    // for (int i = 0; i < all.size(); i++)
    // {
    //     cout<<all.at(i);
    // }
    
    

    for (int i = 0; i < Q; i++)
    {
        int max = 0;
        int com,V;
        cin>>com;
        if(com == 1){
            cin>>V;
            while (!first.empty())
            {
                if(first.top() <= V) break;
                second.push(first.top());
                first.pop();
            }
            first.push(V);
            while (!second.empty())
            {
                first.push(second.top());
                second.pop();
            }
            
            
        }
        else if(com == 2){
            cout<<first.top()<<endl;
            first.pop();
        }
    }


    // while (!first.empty())
    // {
    //     cout<<first.top()<<endl;
    //     first.pop();
    // }
    
    
    return 0;
}