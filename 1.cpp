#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    for (int m = 1; m <= n; m++)
    {
        if(m == 1){
            for (int i = 1; i < n; i++)
            {
                cout<<i;
            }
            
        }
        else if(m == n){
            for (int i = 1; i < n; i++)
            {
                cout<<n;
            }
            
        }

        else{
            cout<<m;
            for (int i = 0; i < n - 2; i++)
            {
                cout<<" ";
            }
            
        }
        cout<<n<<endl;
    }
    
    return 0;
}