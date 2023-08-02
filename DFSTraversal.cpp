#include<bits/stdc++.h>
using namespace std;
void add(vector<int>ar[],int i,int j){
    ar[i].push_back(j);
    ar[j].push_back(i);
}
void print(vector<int>ar[],int n){
  for(int i=0;i<n;i++){
      for(int j=0;j<ar[i].size();j++){
          cout<<ar[i][j]<<" ";
      }
      cout<<endl;
  }  
}
void dfsRec(vector<int>ar[],int n,int s,vector<int>&visi){
            visi[s]=1;
            cout<<s<<" ";
            for(auto in:ar[s]){
                if(visi[in]==0){
                    visi[in]=1;
                    dfsRec(ar,n,in,visi);
                }
            }
}
void dfs(vector<int>ar[],int n){
    vector<int>visi(n,0);
    for(int i=0;i<n;i++){
        if(visi[i]==0){
            dfsRec(ar,n,i,visi);
        }
    }
}
int main(){
    vector<int>ar[8];
    int  n=8;
    add(ar,0,1);
    add(ar,1,3);
    add(ar,1,4);
    add(ar,0,2);
    add(ar,2,3);
    add(ar,3,4);
    add(ar,5,6);
    add(ar,6,7);
    print(ar,n);
    dfs(ar,n);
    
}
