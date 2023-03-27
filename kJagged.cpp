#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool kjagged(int n, int k){
    if(n<k){
        return false;
    }
    vector<int> ans; //vector storing prime factors
    int num=2;
    while(n>1){
        if(n%num==0){
            bool present=false;
            for(int i=0;i<ans.size();i++){  
                if(ans[i]==num){
                    present=true;
                }
            }
            if(!present){
                ans.push_back(num);
            }
            n=n/num;
        }
        else{
            num++;
        }
        
    }
    sort(ans.begin(),ans.end());
    
    if(ans[0]>=k){
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