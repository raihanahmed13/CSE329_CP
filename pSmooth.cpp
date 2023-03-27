#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int gp(int n){
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
    return ans[ans.size()-1];
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
    
    for(int i=q1+1;i<=q2;i++){
        if(gp(i)<=p){
            cout<<i<<" ";
        }
    }

}