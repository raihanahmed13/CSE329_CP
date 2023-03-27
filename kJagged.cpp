#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool kjagged(int n, int k){
    if(n<k){
        return false;
    }
    vector<int>prime;
    
    for(int i=2;i<=n/2;i++){
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
    
    if(prime[0]>=k){
        return true;
    }
    return false;



}
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    cout<<(kjagged(n,k)? "jagged": "not jagged");
}