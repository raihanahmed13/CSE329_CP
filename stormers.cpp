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
    int i;
    cin>>i;
    int term = (i*i)+1;
    int match = 2*i;
    int grtPrime = gp(term);
    if(grtPrime>=match){
        cout<<"Stormers numnber!!";
    }
    else{
        cout<<"Not a Stormers number!!";
    }
}