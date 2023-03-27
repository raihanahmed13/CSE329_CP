#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int gp(int n){
    vector<int>prime;
    
    for(int i=2;i<=n;i++){
        if(n%i==0){
            bool prm = true;
            for(int j=2;j<i/2;j++){
                if(i%j==0){
                    prm=false;
                }
            }
            if(prm){
                prime.push_back(i);
            }
            
        }
    }
    sort(prime.begin(),prime.end());
    return prime[prime.size()-1];
}
int main(){
    int p;
    cout<<"Enter p: ";
    cin>>p;
    int q1,q2;
    cout<<"Enter range: ";
    cin>>q1>>q2;
    //check for q1 to q2 for p smooth
    if(q1==1){
        cout<<1<<" ";
    }
    
    for(int i=q1;i<=q2;i++){
        if(gp(i)<=p){
            cout<<i<<" ";
        }
    }

}